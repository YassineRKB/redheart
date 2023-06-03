#include "libs.h"
/**
 * md5_Calc - function to calculate file's hash
 * @targetFile: filename of target file
 * @md5Hash: pointer to string, where calculated hash will be stored
 * Return: Void
*/
void md5_Calc(const char *targetFile, char *md5Hash)
{
	/* EVP interface preparations & vars declarations */
	EVP_MD_CTX *eCTX;
	FILE *file;
	unsigned char data[BUFFER_SIZE], *c;
	unsigned int md5len = MD5_DIG_LEN;
	int bytes, i = 0;

	/* EVP init */
	eCTX = EVP_MD_CTX_new();
	EVP_DigestInit_ex(eCTX, EVP_md5(), NULL);
	/*
	* reading file in binary mode
	* fopen is much faster than open
	*/
	file = fopen(targetFile, "rb");
	if (!file)
		printf("File %s cannot be opene.\n", targetFile), exit(EXIT_FILENO_ERRO);
	/* EVP UPDATE */
	while ((bytes = fread(data, 1, BUFFER_SIZE, file)) != 0)
		EVP_DigestUpdate(eCTX, data, bytes);
	/* EVP Final */
	c = (unsigned char *)OPENSSL_malloc(md5len);
	if (!c)
		printf("Error Allocating Memory via Openssl malloc\n");
	EVP_DigestFinal_ex(eCTX, c, &md5len);
	/* closing file stream */
	fclose(file);
	/* constructing md5 hash */
	while (i < md5len)
		sprintf(&md5Hash[i * 2], "%02x", c[i]), i++;
}

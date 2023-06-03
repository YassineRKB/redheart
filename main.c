#include "libs.h"
/**
 * main - Entry point for Red
 * @ac: number of passed arguments
 * @av: arguments vector, contains passed arguments
 * Return: 0 on success, +100 on error
*/
int main(int ac, char **av)
{
	size_t hashlen = MD5_DIG_LEN;
	const char *TargetFile, *KnownHash;
	char md5Hash[(hashlen * 2 + 1)];
	int status = 0;
	/* check args len */
	if (ac != 3)
		exit(EXIT_USAGE);
	/* init variables with data */
	TargetFile = av[1];
	KnownHash = av[2];
	md5Hash[0] = '\0';

	/* calculate hash of target file */
	md5_Calc(TargetFile, md5Hash);
	/* compare hash */
	status = strcmp(md5Hash, KnownHash);
	if (status != 0)
		printf("%s is not a know malware\n", TargetFile);
	else
		printf("%s is a known malware\n", TargetFile);

	return (EXIT_SUCCESS);
}

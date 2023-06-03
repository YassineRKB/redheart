#ifndef _LIBS_H
// headers import
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <openssl/evp.h>

// magic numbers
#define BUFFER_SIZE 1024
#define MD5_DIG_LEN EVP_MD_size(EVP_md5());

#define EXIT_SUCCESS 0
#define EXIT_FAIL 100
#define EXIT_USAGE 101
#define EXIT_FILENO_MISS 102
#define EXIT_FILENO_CURR 103

// prototypes
int compareHash(char *md5Hash, const char *KnownHash);
void md5_Calc(const char *targetFile, char *md5Hash);


#define _LIBS_H
#endif

#include <stdio.h>
#include <strings.h>
#include <unistd.h>
#include <errno.h>

int delete(const char* target);
int create(const char* target);

#define NUM_ARGS 1+3 //always 1+, because ./a/out counts to total
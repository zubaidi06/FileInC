#include "../../inc/header.h"

int create(const char* target){
	FILE* fptr = fopen(target, "w");
	if(fptr == NULL) return 1;
	fclose(fptr);
	return 0;
}
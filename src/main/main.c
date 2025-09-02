#include "../../inc/header.h"

int main(int argc, const char* argv[]){
	const char* dir = argv[1];
	const char* target = argv[2];
	
	if(argc != NUM_ARGS){
		printf("improper arguments. %d != %d\n", argc, NUM_ARGS);
		return -1;
	}
	
	
	char s[100];
//	printf("%s\n", getcwd(s, 100));
	//change to first directory in disk
	if(chdir("/") == 0){
		printf("changed\n to %s\n", getcwd(s, 100));
	}else{
		printf("failed\n");
		return 1;
	}
	
	//change to user's directory
	if(chdir(dir) == 0){
		printf("at %s\n", getcwd(s, 100));
	}else{
		printf("failed to find %s\n", getcwd(s, 100));
		return 1;
	}
	return 0;
}
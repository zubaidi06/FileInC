#include "../../inc/header.h"

int delete(const char* target){
	//delete target
	if(remove(target) == 0){
		printf("removed %s\n", target);
	}
	else{
		printf("failed to remove %s\n", target);
		return 1;
	}
	return 0;
}
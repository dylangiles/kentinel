#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int options(char *argv[]) {
	int optionCode;
	if(strcmp(*argv, "-v") || strcmp(*argv, "--view")) {
		optionCode = 1;		
	}

	return optionCode;
}

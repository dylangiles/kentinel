#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "init/init.h"

int main(int argc, char *argv[]) {
	if( argc == 2 ) {
		if(strcmp(*argv, "-i") || strcmp(*argv, "--initialize")) {
			init();
		}
	}
	
	else if( argc > 2 ) {
		printf("Too many arguments supplied.\n");
	}
	
	else {
		FILE *fp;
		fp = fopen("data.ktn", "r");
		if(fp) {
			printf("Kentinel Password Manager\n");
			printf("Enter 'kentinel -h' or 'kentinel --help' for more information.\n");
		}

		else {
			// File could not be opened or doesn't exist
			printf("Kentinel Password Manager\n");
			printf("Enter 'kentinel -i' or 'kentinel --initialize' to set up Kentinel\n");
		}
	}	

	return 0;
}


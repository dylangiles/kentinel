#include <stdio.h>
#include <stdlib.h>

void init() {
	// Make a pointer to a file in memory
	FILE *fp = NULL;

	// Create it and open it for writing
	fp = fopen("data.ktn", "a");
	fp = fopen("data.ktn", "w");

	// If that didn't work, die
	if (fp == NULL) {
		printf("Error initializing database, will quit\n");
		exit(1);
	}

	// Create a pointer to a string
	char *text = "File contents";

	// Print the contents of that string to the file 
	fprintf(fp, "%s\n", text);

	return;
}

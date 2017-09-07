#include <stdio.h>

int main() {
	printf("Kentinel Password Manager\nEnter a command to get started: \n");

	char line[256];

	if(fgets(line, sizeof line, stdin) != NULL) {
		if(line == "view") {
			view();
		}
	}
	
	return 0;
}

void view() {
	printf("View command was used\n");
}

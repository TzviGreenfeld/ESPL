#include <stdio.h>
#include <unistd.h>

// SIGTSTP,
// SIGINT,
SIGCONT
int main(int argc, char **argv){ 

	printf("Starting the program\n");

	while(1) {
		sleep(2);
	}

	return 0;
}
#include <unistd.h>
//#include "helpers.h"
#include <stdlib.h>
#include <stdio.h>

int main (void) {
	pid_t pid;

	printf("before fork (%d)\n", getpid());
	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) { /* child */
		printf("hi from child! (%d -> %d)\n",
				getpid(), getppid());
	} else {            /* parent*/
		printf("hi from parent! (%d)\n", getpid());
	}
	printf("bye (%d)\n", getpid());
	exit(EXIT_SUCCESS);
}
		

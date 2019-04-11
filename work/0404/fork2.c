#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int glob = 42; /* initialized data */

int main(void) {
	int var;
	pid_t pid;
	var = 88;
	if ((pid = fork()) < 0 ) {
		perror("fork error");
	} else if (pid == 0) { /*child */
		printf (" child pid: %d\n", getpid());
		glob++; /* modify variables */
			var++;
	} else {	/* parent */
		printf("parent pid: %d\n", getpid());
		sleep(1);
	}
	printf("pid =%d, glob =%d, var = %d\n", getpid(), glob, var);
	exit(EXIT_SUCCESS);
}

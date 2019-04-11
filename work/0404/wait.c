#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main (void) {
	pid_t pid;
	int status;
	if ((pid = fork()) < 0 )
		perror("fork error");
	else if (pid ==0) { /* child */
		printf("hi from child\n");
		exit(15);
	} else {	/* parent */
		if (wait(&status) != pid)
			perror("wait error");
		printf("hi from parent\n");
		if (WIFEXITED(status))
			printf("normal termination, exit status = %d\n",
					WEXITSTATUS(status));
		else if (WIFSIGNALED(status)); 
			printf("abnormal termination, signal number =%d\n",
					WTERMSIG(status));
	}
	exit(EXIT_SUCCESS);
}

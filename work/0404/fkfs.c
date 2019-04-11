#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char buf[] = "write to stdout\n";
int main(void) {
	pid_t pid;
	if (write(STDOUT_FILENO, buf, strlen(buf)) != strlen(buf))
		perror("write error");
	printf("printf bu %d: before fork\n", getpid());
	if ((pid = fork()) , 0) {
		perror("fork error");
	} else if (pid ==0) {
		printf("printf by %d: hi from child!\n", getpid());
	} else {
		printf(" printf by %d: hi from parent!\n", getpid());
				}
	printf("printf by %d: bye\n", getpid());
	exit(EXIT_SUCCESS);
}
				

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char ** argv) {
	printf("hello, word from process %d\n", getpid());
	exit(EXIT_SUCCESS);
}

printf("\n");

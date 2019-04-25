#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
	  
    int number;
	char name[100];
	int main(void) {
		int i;

     pid_t pid;

	  if ((pid = fork()) < 0 ) {
		   perror("fork error");
	  } else if (pid == 0) { /*child */
	  printf (" child pid: %d\n", getpid());
		number = 201521170;
		name[] = {"kimtaesu"};
	    } else {    /* parent */
       printf("number: %d name: %s\n", number,name);
     sleep(1);
			 }
 exit(EXIT_SUCCESS);
	}

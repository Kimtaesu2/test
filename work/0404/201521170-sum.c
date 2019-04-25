#include <unistd.h>
 #include <stdlib.h>
	 #include <stdio.h>
	    
		   int main (void) {
	         pid_t pid;
			 int i;
			 int sum;
				  
		 printf("before fork (%d)\n", getpid());
		 if ((pid = fork()) < 0) {
	         perror("fork error");
		 } else if (pid == 0) { /* child */
			 for(i = 0; i < 100; i++)
				 sum = sum + i;
		    } else {            /* parent*/
	
									    }
				
					     exit(EXIT_SUCCESS);
					  }


 /* program can be found at: http://www.csl.mtu.edu/cs4411.ck/www/NOTES/process/fork/create.html */


#include  <stdio.h>
#include<unistd.h>
#include  <sys/types.h>

#define   MAX_COUNT  20

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */

void  main(void)
{
     pid_t  pid;
	 

     pid = fork();
     if (pid == 0)
	 {
	           ChildProcess();
			   pid = getpid();
	}
     else
		
          ParentProcess();
		
}

void  ChildProcess(void)
{
     int   i,x;

     for (i = 1; i <= MAX_COUNT; i++){
	          printf("   This line is from child, value = %d\n", i);
			  for (x =0; x <1000000;x++);           // this is to slow down the speed at which a process (parent or child) finishes
	}		  
     printf("   *** Child process is done ***\n");
}

void  ParentProcess(void)
{
     int   i,x;
	 int status;
	 pid_t pid;
	 
     pid = wait(&status);                // this line makes the parent wait for the child
     for (i = 1; i <= MAX_COUNT; i++)
	 {
          printf("This line is from parent, value = %d\n", i);
		  for (x =0; x <1000000;x++);           // this is to slow down the speed at which a process (parent or child) finishes
	}
     printf("*** Parent is done ***\n");
}

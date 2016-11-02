/* program can be found at: http://www.csl.mtu.edu/cs4411.ck/www/NOTES/process/fork/create.html

/* ----------------------------------------------------------------- */
/* PROGRAM  fork-01.c                                                */
/*    This program illustrates the use of fork() and getpid() system */
/* calls.  Note that write() is used instead of printf() since the   */
/* latter is buffered while the former is not.                       */
/* ----------------------------------------------------------------- */

#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

#define   MAX_COUNT  10
#define   BUF_SIZE   100

void  main(void)
{
     pid_t  pid,ppid;
     int    i,x;
     char   buf[BUF_SIZE];

     fork();
     pid = getpid();
     ppid = getppid();	
     for (i = 1; i <= MAX_COUNT; i++) {
          sprintf(buf, "my  pid is: %d, my parent id is %d iteration number  is: %d \n", pid,ppid,i);
		  for (x =0; x <1000000;x++);           // this is to slow down the speed at which a process (parent or child) finishes 
          write(1, buf, strlen(buf));
     } 
}

/* A program to illustrate passing structure values to a function.
	The program reads data for a process and displays it  
	
	This program will use PCB a process control block
	it is an important data structure associated with a computer process (a program that is being executed  
	*/

#include <stdio.h>

// a structure to store the contents of a PCB 

struct procees_control_block
{
   int ID;
   int status; // (1 - ready, 2 - running, 3 - waiting)
//Process state
	int counter;
	int  accumulator;
//Process location in memory pointer to location in memory (assume it is an integer)
    int  location;
    int  priority; //( 1 - high, 2 - low)
};
// typedef struct procees_control_block  PCB;



  // prototype 
void display_process_data(struct procees_control_block) ;
void get_process_data(struct procees_control_block *) ;

void main()
{

	struct procees_control_block process ;
	struct procees_control_block *process_ptr ;

	process_ptr = &process ;

	/* use a pointer to a structure variable as an argument */
	get_process_data( process_ptr ) ;

	/* use a structure variable as an argument */
	display_process_data( process ) ;
}



/* Function: display_process_data() - displays process data
	 Arguments: the process structure                  */
void display_process_data (struct procees_control_block stud)
{
	
	
	printf("\n\n");
	printf("PCB ID: %d\n",stud->ID);
	printf("status        : %d\n",stud->status);
	printf("the state of the process\n");
    printf(" counter         : %d\n",stud->counter);
	printf(" accumulator and location : %2d\t%2d\n",
									 stud->accumulator, stud->location);
	printf("priority     : %d\n", stud->priority);
	
	
	printf( "end of PCB record\n" ) ;
}

/* Function: get_process_data() - This function reads process data
	Arguments: a pointer to the process structure     */
void get_process_data(struct procees_control_block *ptr )
{
	printf( "\n\nPCB ID (1 to 3 digits, except 0) : " );
	  do
		 scanf( "%3d",&ptr.ID );
	  while ( ptr.ID <= 0 );

	  printf( "\nPCB  Status (1 - ready, 2 - running, 3 - waiting) : " );
	  scanf( "%d",&ptr.status );
	  printf("enter the state of the process\n");
      printf( "\n   enter process counter  : " );
	  scanf( "%d",&ptr.counter );
	  printf( "\n enter value of accumulator\n" );
	  printf( "     Day (1 or 2 digits) : " );
	  scanf( "%2d",&ptr.accumulator );
	  printf( " enter the location - should be a pointer but an integer is accepted in this program: " );
	  scanf( "%2d",&ptr.location );
	  printf( "   enter priority ( 1 - high, 2 - low) : " );
	  scanf( "%2d",&ptr.priority );
	 
}

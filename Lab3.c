#include <stdio.h>
#include <stdlib.h>

struct PCB
{
	int process_ID;
	int process_status;
	int process_state;
	int process_counter_value;
	int process_acculumator_value;
	int process_location;
	int process_priority; 

}//end struct PCB

int menu(){
	char choice;
	
	printf("\n\tWelcome to the PCB main menu.\n\n");
	printf("\t1....Add a process to the PCB.\n\n");
	printf("\t2....Display the details of the process control block.\n\n");
	printf("\t9....Quit the program\n\n");
	printf("Please make a selection? ");
	
	scanf("%d",&choice);
	
	if(choice == 1){
		//add_process(process01_ptr);
		
	}//end if
	else if(choice == 2){
		printf("2");
		test1();
	}//end else if
	else if(choice == 9){
		printf("9");
		exit(0);
	}//end else if
	else{
		printf("\n**** That was not a valid input ****\n\n");
		menu();
		}//end else
	return 0;
}// end menu

int add_process(struct PCB *ptr){

	printf("Enter an int for process ID");
	scanf("%d",&(ptr->process_ID));
	printf("Enter an int for process state");
	scanf("%d",&(ptr->process_state));
	printf("Enter an int for process value");
	scanf("%d",&(ptr->process_counter_value));
	printf("Enter an int for process location");
	scanf("%d",&(ptr->process_location));
	printf("Enter an int for process priority");
	scanf("%d",&(ptr->process_priority));
	menu();
	return 0;
}//end add_process

int main(void){
	struct PCB process01;
	struct PCB *process01_ptr;
	process01_ptr = &process01;
	add_process(process01_ptr);
	menu();
	return 0;
}// end main

int test1(){
	printf("Test function");
	menu();
	return 0;
}//end test

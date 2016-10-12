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

};//end struct PCB

//struct PCB process_list[5];
//struct PCB process01;
//struct PCB *process01_ptr;
//process01_ptr = &process01;

//void add_process(struct PCB *);

int main(void){
	struct PCB process01;
	struct PCB *process01_ptr;
	process01_ptr = &process01;
		
	/* int choice = menu();
	
	if(choice == 1){
		add_process(process_list[0]);
		
	}//end if
	else if(choice == 2){
		view_process(process01);
	}//end else if */
	menu(process01, process01_ptr);
	return 0;
}//end main

int add_process(struct PCB *ptr){

	printf("Enter an int for process ID ");
	scanf("%d",&(ptr->process_ID));
	printf("Enter an int for process state ");
	scanf("%d",&(ptr->process_state));
	printf("Enter an int for process value ");
	scanf("%d",&(ptr->process_counter_value));
	printf("Enter an int for process location ");
	scanf("%d",&(ptr->process_location));
	printf("Enter an int for process priority ");
	scanf("%d",&(ptr->process_priority));
	menu();
	return 0;
}//end add_process

int view_process(struct PCB process){

	printf("The process ID is %d \n",process.process_ID);
	printf("The process state value is %d \n",process.process_state);
	printf("The process counter value is %d \n",process.process_counter_value);
	printf("The process location is %d \n",process.process_location);
	printf("The value for process priority is %d \n",process.process_priority);
	
	menu();
	return 0;
}//end add_process

int menu(struct PCB process01, struct PCB *process01_ptr){
	char choice;
	
	printf("\n\tWelcome to the PCB main menu.\n\n");
	printf("\t1....Add a process to the PCB.\n\n");
	printf("\t2....Display the details of the process control block.\n\n");
	printf("\t9....Quit the program\n\n");
	printf("Please make a selection? ");
	
	scanf("%d",&choice);
	
	if(choice == 1){
		add_process(process01_ptr);
		
	}//end if
	else if(choice == 2){
		view_process(process01);
	}//end else if
	else if(choice == 9){
		exit(0);
	}//end else if
	else{
		printf("\n**** That was not a valid input ****\n\n");
		menu(process01, process01_ptr);
		}//end else
	return 0;
}// end menu
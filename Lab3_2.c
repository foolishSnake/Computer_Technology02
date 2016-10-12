#include <stdio.h>
#include <string.h>

struct process_cont_blk{
	int process_id;
	int process_status;
	int process_state;
	int process_counter_value;
	int process_acculumator_value;
	int process_location;
	int process_priority;
	
};// end process_cont_blk struct

//
//void set_process_data(struct process_cont_blk process_ptr *);
//void display_process_data(struct process_cont_blk process);
int main(){
	struct process_cont_blk process;
	struct process_cont_blk *process_ptr;
	process_ptr = &process;
	
	set_process_data(process_ptr);
	display_process_data(process);
	
	return 0;
}// end main

int display_process_data(struct process_cont_blk pcb){
	printf("The process ID is %d \n",pcb.process_id);
	printf("The process state value is %d \n",pcb.process_state);
	printf("The process counter value is %d \n",pcb.process_counter_value);
	printf("The process location is %d \n",pcb.process_location);
	printf("The value for process priority is %d \n",pcb.process_priority);
	return 0;
}// end display_process_data

int set_process_data(struct process_cont_blk *pcb_ptr){
	printf("Enter an int for process ID ");
	scanf("%d",&(pcb_ptr->process_id));
	printf("Enter an int for process state ");
	scanf("%d",&(pcb_ptr->process_state));
	printf("Enter an int for process value ");
	scanf("%d",&(pcb_ptr->process_counter_value));
	printf("Enter an int for process location ");
	scanf("%d",&(pcb_ptr->process_location));
	printf("Enter an int for process priority ");
	scanf("%d",&(pcb_ptr->process_priority)); 
	return 0;
}// end display_process_data
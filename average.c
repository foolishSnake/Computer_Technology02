/*
average 10 ages
DT249 Computer Technologys 2
Phillip Hourigan
*/

// import input output library
#include <stdio.h>

// start main function
void main(){
    // declare variables
    int ages[10];
    int index, total_age = 0;
	
    // prompt user for age input
    printf("Please enter the age of 10 people? ");

    // for loop addes ages to array and totals all ages	
    for(index = 0; index < 10; index++){
        scanf("%d",&ages[index]);
        total_age = total_age + ages[index];
        }// End for

    // prints to screen the average age    
    printf("The average age is %d\n", total_age/10);
}// End main

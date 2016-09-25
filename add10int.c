/*
DT249 Computer Technologys 2
Lab1
Phillip Hourigan
Input 10 intergers sun them get the smallest and largest
*/

// import input output library
#include <stdio.h>

// main function
void main(){
    // Declare variables
    int sum_array[10];
    int counter = 0;
    int sum_of_array = 0;
    int lowest_int;
    int largest_int;

    // for loop ask for 10 user input adds them to array
    for(counter = 0; counter < 10; counter++){
        printf("Input an interger? \n");
        scanf("%d",&sum_array[counter]);
    }//end for

    // variable initialisation
    lowest_int = sum_array[0];
    largest_int = sum_array[0];

    // for loop sums the total element of the array, records lowest and highest valued element in the array
    for(counter = 0; counter < 10; counter++){
        sum_of_array = sum_of_array + sum_array[counter];
        if(sum_array[counter] < lowest_int){
        lowest_int = sum_array[counter];
        }//end if
        if(sum_array[counter] > largest_int){
        largest_int = sum_array[counter];
        }//end if
    }//end for

    // prints the output to the screen
    printf("The sum of all entered numbers is %d.\n", sum_of_array);
    printf("The lowest entered number was %d.\n", lowest_int);
    printf("The largest entered number was %d.\n", largest_int);
}//end main

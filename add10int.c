/*
DT249 Computer Technologys 2
Lab1
Phillip Hourigan
Input 10 intergers sun them get the smallest and largest
*/

#include <stdio.h>

void main(){
    int sum_array[10];
    int counter = 0;
    int sum_of_array = 0;
    int lowest_int;
    int largest_int;

    for(counter = 0; counter < 10; counter++){
        printf("Input an interger? \n");
        scanf("%d",&sum_array[counter]);
    }//end for

    lowest_int = sum_array[0];
    largest_int = sum_array[0];

    for(counter = 0; counter < 10; counter++){
        sum_of_array = sum_of_array + sum_array[counter];
        if(sum_array[counter] < lowest_int){
        lowest_int = sum_array[counter];
        }//end if
        if(sum_array[counter] > largest_int){
        largest_int = sum_array[counter];
        }//end if
    }//end for

    printf("The sum of all entered numbers is %d.\n", sum_of_array);
    printf("The lowest entered number was %d.\n", lowest_int);
    printf("The largest entered number was %d.\n", largest_int);
}//end main

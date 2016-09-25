/*
Histogram 
DT249 Computer Technologys
Phillip Hourigan
*/

// import input output library
#include <stdio.h>

// start main function
void main(){
    //declare variable 
    int value_array[10];
    int i = 0;
    int j = 0;
 
    // for loop prompts user for interger adds it to array
    for(i = 0; i < 10; i++){
    printf("Enter an interger value?\n");
    scanf("%d",&value_array[i]);
    }//end for

    // prints to screen a heading
    printf("%-20s%s","Value", "Histogram\n");

    // for loop prints to screen value of each element in the array
    for(i = 0; i < 10; i++){
    printf("%-20d", value_array[i]);
        // nested for loop prints to screen a "*" for each unit of value in the element in the array
        for(j = 0; j < value_array[i]; j++){
        printf("*");
        }//end for
    printf("\n");
    }//end for
}//end main

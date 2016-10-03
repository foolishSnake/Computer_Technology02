/*
DT249 Computer Technologys 2
Lab2 Q2
Phillip Hourigan
Input 10 intergers sun them get the smallest and largest
D15124474
*/

// import input output library
#include <stdio.h>

// start sum function
int sum(int sum_array[]){
    // declare variables
    int counter = 0;
    int sum_of_array  = 0;

    // for loop sums the total element of the array
    for(counter = 0; counter < 10; counter++){
        sum_of_array = sum_of_array + sum_array[counter];
        }// end for
    
    // returns the value of the sum_of_array
    return sum_of_array;
}// end sum

// start lowest value function
int lowest_value(int array[]){
    // declare variables
    int counter = 0;
    int lowest_int = array[0];
   
    // for loop iterates all elements looking for lowest value    
    for(counter = 0; counter < 10; counter++){
        if(array[counter] < lowest_int){
        lowest_int = array[counter];
        }//end if
    }// end for

    // return the value of lowest_int
    return lowest_int;
}// end lowest_value


// start highest  value function
int highest_value(int array[]){
    // declare variables
    int counter = 0;
    int highest_int = array[0];
    
    // for loop iterates the elements of the array looking for highest value    
    for(counter = 0; counter < 10; counter++){
        if(array[counter] > highest_int){
        highest_int = array[counter];
        }//end if
    }// end for

    // return the value of highest_int
    return highest_int;

}// end highest_value

// start main function
void main(){
    // Declare variables
    int sum_array[10];
    int counter = 0;
   
 // for loop ask for 10 user input adds them to array
    for(counter = 0; counter < 10; counter++){
        printf("\nInput an interger? _");
        scanf("%d",&sum_array[counter]);
    }//end for

    // prints the output to the screen
    printf("The sum of all entered numbers is %d.\n", sum(sum_array));
    printf("The lowest entered number was %d.\n", lowest_value(sum_array));
    printf("The largest entered number was %d.\n", highest_value(sum_array));
}//end main



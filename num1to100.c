/*
Lab1
DT249 Computer Technologys 2
Enter number between 1 and 100
Validate the number is between 1 and 20
Phillip Hourigan
*/

// import input output library
#include <stdio.h>

// start main function
void main(){
    // declare variable
    int user_input;

    // prompt user for a number value assign to variable
    printf("Please enter a number between 1 and 100 ? ");
    scanf("%d",&user_input);

    // if else condition statement to validate data and output message
    if(user_input > 0 && user_input < 21){
        printf("Your input was between 1 and 20\n");
    }// end if
    if(user_input < 1){
        printf("Your number is less than 1\n");
    }//end if
    else{
        printf("Your nunber was greater than 20\n");
    }   
}// end main

/* Computer Technology 2
   Lab2PrintArray
   Phillip Hourigan
   D15124474
*/

// import input output library
#include <stdio.h>

// main function prototype
void main(){
    // declare variabels
    int array1[5] = {2, 5, 7, 9, 99};
    int i;

    // for loop to iterate elements of array
    for(i = 0; i < 5; i++){
        printf("The value of element %d = %d, it's address in memory is %p.\n",i, array1[i], &array1[i]);
    }// end for
 
}// end main

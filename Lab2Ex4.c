/*
Dt249 Computer Technology 2
Lab 2 Q 4
Philip Hourigan
D15124474
*/

// import standard input output library
#include <stdio.h>


int main(int argc, char *argv[]){
    // declare variables
    int matrix_a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix_b[3][3] = {{5, 20, 55}, {6, 77, -9}, {-99, 4, 1}};
    int matrix_c[3][3];
    int i = 0;
    int j = 0;

// add value from matrix_a to matrix_b then assign to matrix_c
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }// end nested for loop
    }// end for loop

    // print out the values of the three matrix
    printf("Matrix A\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%-5d ",matrix_a[i][j]);
        }// end nested for loop
        printf("\n");
    }// end for loop

 // print out the values of the three matrix
    printf("Matrix B\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("%-5d ",matrix_b[i][j]);
        }// end nested for loop
    printf("\n");
    }// end for loop

 // print out the values of the three matrix
    printf("Matrix C\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("%-5d ",matrix_c[i][j]);
        }// end nested for loop
    printf("\n");
    }// end for loop

    return 0;
}// end main

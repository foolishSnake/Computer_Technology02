/*
DT249 Computer Technology 2
Lab 1
Declare 4 variables of data type int, float, and char
Phillip Hourigan
*/

// import input out put library
#include <stdio.h>
// define a constant
#define NO_OF_ELM 5

// start main function
void main(){
    // declare variables
    int i_var1, i_var2, i_var3, i_var4;
    float f_var1, f_var2, f_var3, f_var4;
    char c_var1, c_var2, c_var3, c_var4;

    // prompt user for inputs adds input to variables
    printf("Please enter a interger value ie 7?\n");
    scanf("%d",&i_var1);
    printf("Please enter a interger value ie 4?\n");
    scanf("%d",&i_var2);
    printf("Please enter a interger value ie 66\n");
    scanf("%d",&i_var3);
    printf("Please enter a interger value ie 99?\n");
    scanf("%d",&i_var4);
    printf("Please enter a float value ie 4.5?\n");
    scanf("%f",&f_var1);
    printf("Please enter a float value ie 4.5?\n");
    scanf("%f",&f_var2);
    printf("Please enter a float value ie 4.5?\n");
    scanf("%f",&f_var3);
    printf("Please enter a float value ie 4.5?\n");
    scanf("%f",&f_var4);
    printf("Please enter a character value ie h?\n");
    scanf("%c",&c_var1);
    printf("Please enter a character value ie h?\n");
    scanf("%c",&c_var2);
    printf("Please enter a character value ie h?\n");
    scanf("%c",&c_var3);
    printf("Please enter a character value ie h?\n");
    scanf("%c",&c_var4);
 
    // prints to screen the value of each variable and it location in memory
    printf("The intergers are %d, %d, %d and %d\n",i_var1, i_var2, i_var3, i_var4);
    printf("The intergers are stored at these memory address %p, %p, %p and %p\n", &i_var2, &i_var2, &i_var3, &i_var4);
    printf("The floats are %f, %f %f and %f\n",f_var1, f_var2, f_var3, f_var4);
    printf("The floats are stored at these memory address %p, %p, %p and %p\n", &f_var2, &f_var2, &f_var3, &f_var4);
    printf("The characters are %c, %c, %c and %c\n",c_var1, c_var2, c_var3, c_var4);
    printf("The characrers are stored at these memory address %p, %p, %p and %p\n", &c_var2, &c_var2, &c_var3, &c_var4);

}// End Main

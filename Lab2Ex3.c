#include<stdio.h>


void main(){
    //declare variable 
    int i = 5; // an integer value 3
    int *j; // a pointer
    int **k; // a pointer to a pointer (double pointer)
    j = &i; //line 1
    k = &j; //line 2


    // list of print statements
    printf("The value of **k is  %d\n",**k);
    printf("The value of *k is %p\n",*k);
    printf("The value of k is %p\n",k);
    printf("The value of *j is %d\n",*j);
    printf("The value of j is %p\n",j);  
    printf("The value of i is %d\n",i);
    printf("hello"); 
}//end main

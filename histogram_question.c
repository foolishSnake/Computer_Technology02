/* the histogram question in lecture 2 (review of C programming) */

#include<stdio.h>


void main()
{
    
    /* Decalre programming variables */
    int histogram[10];
    int index, counter;
    
    /* input values into the array */
    printf("please enter 10 integer values: \n\n");
    
    for(index = 0; index < 10; index++)
    {
        printf("please enter value number %d: ", index+1);
        scanf("%d", &histogram[index]);
        flushall;
    }
    
    
    /* Display the value and the histogram */
    /* use an outer for loop to control access to each element of the array 
            the inner for loop is used to display the number of astrexis for each element */
    
    for (index = 0; index <10; index++)
    {
        /* initalise the count variable */
        counter = 0;
        
        /*reset the cursor   */
        printf("\n");
        
        
        printf("%d   ", histogram[index]);
        
        /*display the asters for each element */
        while ( counter < histogram[index])
        {
            printf("*");  
            counter++; // increment the conditional variable 
        }        
    
        /*reset the cursor   */
        printf("\n");
    }
    
    getchar();
    getchar();   // required to hold the window open for the BCC compiler

}  // end of program    
    
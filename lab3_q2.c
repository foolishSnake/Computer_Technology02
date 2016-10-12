/* Answer to lab 3 Question 2


A node should have two fields: a data field (e.g. int…) and a pointer to the node field (e.g. node* ptr)

b)	Create a node (hint: use malloc function refer to stack.c)  
c)	Add data to the different fields of the node (the data field and the pointer field)
d)	Set the pointer field to NULL  (points to nothing)
e)	print the address of the node 
f)	print the contents of the node including the contents of the pointer element of the node.  

*/


#include<stdio.h>
#include <stdlib.h>

// define self-referential structure                       
struct listNode {                                      
   int data; // each listNode contains a character 
   struct listNode *nextPtr; // pointer to next node
};

typedef struct listNode ListNode; // synonym for struct listNode


void main()
{

	// a) declare and create a node
	ListNode* newPtr = malloc(sizeof(ListNode)); // create node
	
	
	 // b) assign values to each field
	 if (newPtr != NULL) { // is space available
      newPtr->data = 6; // place value in node
      newPtr->nextPtr = NULL; // node does not link to another node
	 } 
	  // c address of the node
	  
	  printf("the address of the newly created node is %p\n", newPtr); 
	
	// d the contents of the node 
	 printf("%d --> ", newPtr->data);
	 printf("%p\n", newPtr->nextPtr);
	 
	 
	 printf("end of the program \n");
}
	
	
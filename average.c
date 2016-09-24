#include <stdio.h>

void main(){
	int ages[10];
	int index, total_age = 0;
	
	printf("Please enter the age of 10 people? ");
	
	for(index = 0; index < 10; index++){
		scanf("%d",&ages[index]);
		total_age = total_age + ages[index];
	}// Eud for
	printf("The average age is %d\n", total_age/10);
}// End  
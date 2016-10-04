#include <stdio.h>

#define NO_ELEMS 3

void print_output(int *p, int matrix[NO_ELEMS][NO_ELEMS]){
	char matrix_let[3] = "ABC";
	int i, j;
	printf("Matrix %c \n",matrix_let[*p]);
	for(i = 0; i < NO_ELEMS; i++){
		for(j = 0; j < NO_ELEMS; j++){
			printf("%-5d ",*(*(matrix + i) + j));
		}// end for loop
		printf("\n");
		
	}// end for loop
	printf("\n");
	*p = *p + 1;
	
}// end print_output

void main(){
	int matrix_a[NO_ELEMS][NO_ELEMS] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	int matrix_b[NO_ELEMS][NO_ELEMS] = {{10, 33, 42}, {-2, 100, 43}, {-20, 5, 4}};
	int matrix_c[NO_ELEMS][NO_ELEMS];
	int i, j;
	int matrix_num = 0;
	int *p;
	p = &matrix_num;
	
	for(i = 0; i < NO_ELEMS; i++){
		for(j = 0; j < NO_ELEMS; j++){
			matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
		}// end nested for loop
	}// end for loop
	
	print_output(p, matrix_a);
	print_output(p, matrix_b);
	print_output(p, matrix_c);
}// end main
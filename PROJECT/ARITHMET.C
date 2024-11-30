#include<stdio.h>
void main(){
	int *ptr = (int *)malloc(1000000000 * sizeof(int));//Excessive Allocation
	clrscr();
	if(ptr == NULL){
		printf("Memory Allocation Failed\n");
	}else{
		printf("Memory allocation succeeded\n");
		free(ptr);
	}
}

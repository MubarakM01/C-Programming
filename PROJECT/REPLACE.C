#include<stdio.h>
void main(){
	int arr[5] = {5, 4, 3, 2, 1},*ptr1,*ptr2,temp,i;
	ptr1 = arr;
	ptr2 = arr + 4;
	 clrscr();
	while(ptr1 < ptr2){
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2--;
	}

	printf("Revese Array: ");
	for(i = 0; i < 5; i++){
		printf(" %d",arr[i]);
		}
	}


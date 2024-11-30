#include<stdio.h>
int main(){
	FILE *file;
	char data[100];

	printf("Enter data to write to the file: ");
	gets(data);

	file = fopen("output.txt","w");
	if(file == NULL){
		printf("Error opening file\n");
		return 0;
	}
	fprintf(file, %s",data);
	fclose(file);

	printf("data writtento file successfull,\n);
	return 0;
	}

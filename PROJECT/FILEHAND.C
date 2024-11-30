#include<stdio.h>
int main(){
	FILE *file;
       //	char data[500];
	int lines = 0;
	char ch;
	clrscr();

	//printf("Enter a Line to append : \n");
	//gets(data);

	file = fopen("C:\\TurboC3\\BIN\\output.txt","rt");
	if(file == NULL){
		printf("Error Opening file!\n");
		return 1;
	}
	//fprintf(file,"\n%s",data);
       //	fclose(file);
	while((ch = fgetc(file)) != EOF){
		putchar(ch);
		if(ch == '\n'){
		lines++;
		printf("newline found current count:%d\n",lines);
		}
       }
       fclose(file);

       printf("Total Number of Lines : %d\n",lines + 1);
       return 0;
}
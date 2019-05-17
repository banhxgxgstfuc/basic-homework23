#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	FILE *fptr;
	char ch;
	
	fptr=fopen("data.txt","r");
	if(fptr!=NULL)
	{
		while((ch=getc(fptr))!=EOF)
		{
			printf("%c",ch);
			
		}
		fclose(fptr);
	}
	
	return 0;
}

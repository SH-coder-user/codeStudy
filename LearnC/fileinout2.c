#include<stdio.h>

int main(void)
{	
	FILE *fp = NULL;
	int c;

	fp = fopen("output.txt", "r");
	
	if(fp == NULL) printf("파일을 열 수 없습니다. \n");
	if(fp != NULL) printf("파일을 열 수 있습니다. \n");
	
	while((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}


	fclose(fp);
	return 0;

}

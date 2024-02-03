#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *fp  =NULL;
	char *strr = "hello!";

	fp = fopen("output.txt","w");
	if(fp ==NULL){
		printf("파일 열기에 성공했습니다\n");
	}
	else
	{
		printf("파일 열기에 실패했습니다.\n");
	}
	
	fprintf(fp,"%s", strr);

	printf("파일 쓰기에 성공하였습니다..\n");
	
	fclose(fp);

	return 0;
}

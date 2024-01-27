#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//구조체로 동적 메모리 생성하기

struct Book
{
	int number;
	char title[100];
};

void showBook(struct Book *p, int n)
{
	int i;
	for(i=0; i<n ; i++)
	{
		printf("번호 %d : %s\n", (p + i)->number,(p + i)->title);
	}
}

int main(void)
{
	struct Book *p;
	p = (struct Book *)malloc(2 * sizeof(struct Book));
	if(p == NULL)
	{
		printf("동적 메모리 할당에 실패했음.\n");
		exit(1);
	}

	p->number  =1;
	strcpy(p->title, "C programming");

	(p + 1)->number = 2;
	strcpy((p+1)->title,"Data Structure");
	
	showBook(p,2);
	free(p);


	return 0;
}

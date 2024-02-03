#include<stdio.h>
#include<stdlib.h> //동적메모리 사용 시 선언

int main(void)
{
	int *pi;
	pi = (int *)malloc(sizeof(int));
	if(pi ==NULL)
	{
		printf("동적 메모리 할당 실패\n");
		exit(1);
	}
	*pi = 100;
	printf("%d\n",*pi);

	free(pi);
	return 0;
}

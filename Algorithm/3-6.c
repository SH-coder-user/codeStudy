/* bsearch 함수를 사용해 내림차순으로 정렬도니 배열을 검색합니다. */

#include<stdio.h>
#include<stdlib.h>

/* 정수를 비교하는 함수 */

int int_cmpr(const int  *a, const int *b){
	
	if (*a < *b)
	{
		return 1;
	}else if (*a > *b)
	{
		return -1;
	}else
		return 0;
}

int main(void)
{
	int i, nx, ky;
	int *x, *p;
	puts("bsearch 함수를 사용하여 검색");
	printf("요소개수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	printf(" 내림차순으로 입력하세요 .\n");
	printf("x[0] : ");
	scanf("%d", &x[0]);

	for ( i = 1; i < nx; i++)
	{
		do
		{
			printf("x[%d] : ",i);
			scanf("%d", &x[i]);
		} while (x[i] > x[i-1]);
	}
	printf("검색 값 : ");
	scanf("%d",&ky);

	p = bsearch(&ky, /* 검색값에 대한 포인터 */
	x, /* 배열 */
	nx, /* 요소의개수 */
	sizeof(int), /* 요소의 크기 */
	(int(*)(const void *, const void *)) int_cmpr); /* 비교함수 */

	if (p == NULL)
	{
		puts("검색에 실패했습니다.\n");
	}else{
		printf("%d은(는) x[%d]에 있습니다.\n",ky, (int)(p-x)); /* 배열을 해제 */
	}
	free(x);
	
	return 0;
}
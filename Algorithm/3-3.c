/* 선형검색 보초법 */

#include<stdio.h>
#include <stdlib.h>

/* 요소의 개수가 n인배열 a에서 key와 일치하는 요소를 선형 검색 (보초법)*/
int search(int a[], int n, int key){

	int i = 0;
	a[n] = key; /* 보초를 추가 */
	while (1)
	{
		if (a[i]== key)
		{
			break; /* 원하는 키 값을 찾은 경우 */
		}
		i++;
	}
	
	return i == n  ? -1 : i; /* 찾은 값이 i == n 이면 보초값이므로 -1 반환(실패), 그게 아니면 i 반환(성공)*/
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;
	puts("선형 검색(보초법)");
	printf("요소 개수 : ");
	scanf("%d",&nx);
	x = calloc(nx+1, sizeof(int)); /* 요소의 개수가 (nx+1)인 int형 배열을 생성 */
	for ( i = 0; i < nx; i++)
	{
		printf("x[%d] : ",i); 
		scanf("%d",&x[i]);
	}
	printf("검색값 : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx ==-1)
	{
		puts("검색에 실패했습니다.");
	}else{
		printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
	}
	free(x);	/* 배열해제 */
	return 0;
	
}
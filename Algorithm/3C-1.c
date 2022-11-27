/* 덧셈 곱셈표 */

#include<stdio.h>

int sum(int x1, int x2)
{
	return x1 + x2;
}

int mul(int x1, int x2 )
{
	return x1 * x2;
}

void kuku (int(*calc)(int, int))
/* (*calc)는 함수 sum과 mul의 매개포인터이다. 
함수에대한 포인터에 간접연산자 *를 적용한 코드를 실행 시 그 포인터가 가리키는 함수가 호출된다. */
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%3d", (*calc)(i, j));	/* code */
		}
		putchar('\n');
	}
}

int main(void)
{
	puts("덧셈표");
	kuku(sum);
	puts("곱셈표");
	kuku(mul);
}
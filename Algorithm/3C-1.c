/* ���� ����ǥ */

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
/* (*calc)�� �Լ� sum�� mul�� �Ű��������̴�. 
�Լ������� �����Ϳ� ���������� *�� ������ �ڵ带 ���� �� �� �����Ͱ� ����Ű�� �Լ��� ȣ��ȴ�. */
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
	puts("����ǥ");
	kuku(sum);
	puts("����ǥ");
	kuku(mul);
}
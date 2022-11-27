/* bsearch �Լ��� ����� ������������ ���ĵ��� �迭�� �˻��մϴ�. */

#include<stdio.h>
#include<stdlib.h>

/* ������ ���ϴ� �Լ� */

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
	puts("bsearch �Լ��� ����Ͽ� �˻�");
	printf("��Ұ��� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	printf(" ������������ �Է��ϼ��� .\n");
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
	printf("�˻� �� : ");
	scanf("%d",&ky);

	p = bsearch(&ky, /* �˻����� ���� ������ */
	x, /* �迭 */
	nx, /* ����ǰ��� */
	sizeof(int), /* ����� ũ�� */
	(int(*)(const void *, const void *)) int_cmpr); /* ���Լ� */

	if (p == NULL)
	{
		puts("�˻��� �����߽��ϴ�.\n");
	}else{
		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n",ky, (int)(p-x)); /* �迭�� ���� */
	}
	free(x);
	
	return 0;
}
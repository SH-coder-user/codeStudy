/* �����˻� ���ʹ� */

#include<stdio.h>
#include <stdlib.h>

/* ����� ������ n�ι迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻� (���ʹ�)*/
int search(int a[], int n, int key){

	int i = 0;
	a[n] = key; /* ���ʸ� �߰� */
	while (1)
	{
		if (a[i]== key)
		{
			break; /* ���ϴ� Ű ���� ã�� ��� */
		}
		i++;
	}
	
	return i == n  ? -1 : i; /* ã�� ���� i == n �̸� ���ʰ��̹Ƿ� -1 ��ȯ(����), �װ� �ƴϸ� i ��ȯ(����)*/
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;
	puts("���� �˻�(���ʹ�)");
	printf("��� ���� : ");
	scanf("%d",&nx);
	x = calloc(nx+1, sizeof(int)); /* ����� ������ (nx+1)�� int�� �迭�� ���� */
	for ( i = 0; i < nx; i++)
	{
		printf("x[%d] : ",i); 
		scanf("%d",&x[i]);
	}
	printf("�˻��� : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx ==-1)
	{
		puts("�˻��� �����߽��ϴ�.");
	}else{
		printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	}
	free(x);	/* �迭���� */
	return 0;
	
}
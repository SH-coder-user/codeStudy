/* bsearch�Լ��� �̿��� ����ü �迭������ �˻� */
#include<stdio.h>
#include<stdio.h>
#include<string.h>

typedef struct {
	char name[10];
	int height;
	int weight;
}Person;

/* Person���� �� �Լ�(������������ �̸� ����) */
int npcmp(const Person *x, const Person *y)
{
	return strcmp(x->name, y->name);
}

int main(void)
{
	Person x[] = {
		{"�迵��",179,79},
		{"������",169,73},
		{"�̼���",161,51},
		{"������",170,49},
		{"�Թξ�",164,51},
		{"���̵�",179,69},
	};
	int nx = sizeof(x) / sizeof(x[0]); /* �迭 x�� ��� ���� */
	int retry;
	puts("�̸����� �˻��մϴ�.");
	do
	{
		Person tmp, *p;
		printf("�̸� : ");
		scanf("%s",tmp.name);
		p = bsearch(&tmp, x, nx, sizeof(Person),
		(int(*)(const void *, const void *))npcmp);
		if (p == NULL)
		{
			puts("�˻��� �����߽��ϴ�.");
		}else{
			puts("�˻� ���� !! �Ʒ���Ҹ� ã�ҽ��ϴ�.");
			printf("x[%d] : %s %dcm %dkg\n",(int)(p - x), p->name, p->height, p->weight);
		}
		printf("�ٽ� �˻��ұ��? (1)�� / (2) �ƴϿ� : ");
		scanf("%d", &retry);
	} while (retry == 1);
	
	return 0;
}
/* bsearch함수를 이용한 구조체 배열에서의 검색 */
#include<stdio.h>
#include<stdio.h>
#include<string.h>

typedef struct {
	char name[10];
	int height;
	int weight;
}Person;

/* Person형의 비교 함수(오름차순으로 이름 정렬) */
int npcmp(const Person *x, const Person *y)
{
	return strcmp(x->name, y->name);
}

int main(void)
{
	Person x[] = {
		{"김영준",179,79},
		{"박현규",169,73},
		{"이수진",161,51},
		{"최윤미",170,49},
		{"함민아",164,51},
		{"아이디",179,69},
	};
	int nx = sizeof(x) / sizeof(x[0]); /* 배열 x의 요소 개수 */
	int retry;
	puts("이름으로 검색합니다.");
	do
	{
		Person tmp, *p;
		printf("이름 : ");
		scanf("%s",tmp.name);
		p = bsearch(&tmp, x, nx, sizeof(Person),
		(int(*)(const void *, const void *))npcmp);
		if (p == NULL)
		{
			puts("검색에 실패했습니다.");
		}else{
			puts("검색 성공 !! 아래요소를 찾았습니다.");
			printf("x[%d] : %s %dcm %dkg\n",(int)(p - x), p->name, p->height, p->weight);
		}
		printf("다시 검색할까요? (1)예 / (2) 아니오 : ");
		scanf("%d", &retry);
	} while (retry == 1);
	
	return 0;
}
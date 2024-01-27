#include<stdio.h>
#include<stdlib.h>

struct student{
	int number;
	char name[10];
	double grade;
};


int main(void)
{
	struct student s;

	printf("학번을 입력하세요 : ");
	scanf("%d",&s.number);

	printf("이름을 입력하세요 : ");
	scanf("%s",s.name); //배열은 그자체로 포인터주소를 갖고있어서 따로&를 사용하지 않는다.

	printf("학점을 입력하세요 : ");
	scanf("%lf",&s.grade);

	printf("학번 : %d\n",s.number);
	printf("이름 : %s\n",s.name);
	printf("학점 : %lf\n",s.grade);
	return 0;
}

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
	s.number = 20140001;
	strcpy(s.name,"홍길동");
	s.grade= 5.6;
	printf("학번 : %d\n",s.number);
	printf("이름 : %s\n",s.name);
	printf("학점 : %lf\n",s.grade);
	return 0;
}

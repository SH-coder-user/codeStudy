#include<stdio.h>
#define SIZE 5

struct student{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];
	int i;

	for(i = 0; i < SIZE; i ++){
		printf("%d번째 학생 학번입력 : ",i);
		scanf("%d", &list[i].number);

		printf("%d번째 학생 이름입력 : ",i);
		scanf("%s",list[i].name);

		printf("%d번째 학생 학점입력 : ",i);
		scanf("%lf", &list[i].grade);  //double형은 lf로 입력받음.
	}

	for(i =0 ; i <SIZE ; i++){
		printf("%d 학생의 학번 %d, 이름 :%s 학점 :%f\n",i,list[i].number, list[i].name,list[i].grade);
	}

	return 0;
}

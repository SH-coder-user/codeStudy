#include<stdio.h>

int mdays[][12];
int isleap(int year);
int dayofyear(int y,int m , int d);

	/*한 해의 지난 날 수를 구한다.*/
int main(void){

	int year, month, day;
	int retry;

	do{
		printf("년 : "); scanf("%d",&year);
		printf("월 : "); scanf("%d",&month);
		printf("일 : "); scanf("%d",&day);
		printf("%d년의 %d일째 입니다.\n",year, dayofyear(year,month,day));
		printf("다시할까요? (1 --예 2 --아니오) : ");
		scanf("%d",&retry);
	}while (retry==1);
}


int mdays[][12]= {
{31, 28,31,30,31,30,31,31,30,31,30,31}, /*평년*/
{31, 29,31,30,31,30,31,31,30,31,30,31} /* 윤년 4로 나누어떨어지는 수 확실하게 만들기위해 100으로 나누어떨어지거나 400으로 나누어떨어지는지 확인*/
};

/*year년이 윤년인가??*/
int isleap(int year)
{
return year % 4 == 0 && year % 100 !=0 ||year % 400 == 0;
}

/*y 년 m월 d일의 그해 지난 날 수를 구한다.*/
int dayofyear(int y, int m, int d)
{
	int i;
	int days = d;
	for ( i = 0; i < m; i++)
	{
		days +=	mdays[isleap(y)][i-1];	/* code */
	}
	return days;
}


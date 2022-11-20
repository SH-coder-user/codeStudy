/*신체검사 데이터용 구조체 배열*/
#include<stdio.h>
#define VMAX 21 /*시력의 최댓값 2.1 x 10 */

/*신체검사 구조체*/
typedef struct 
{
	char name[20]; /* 이름 */
	int height;	/* 키 */
	double vision; /* 시력 */
} PhysCheck;

/* 키의 평균값 구하기 */
double ave_height(const PhysCheck dat[], int n){
	int i;
	double sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += dat[i].height;	/*  객체 이름.멤버이름(객체이름이 가르키는 객채 안의 멤버 = 객체이름) */
	}
	return sum / n;
	
}

void dist_vision(const PhysCheck dat[], int n, int dist[]){

	int i;
	for ( i = 0; i < VMAX; i++)
	{
		dist[i] = 0;	/* 배열 초기화 */
	}
	for ( i = 0; i < n; i++)	/* 배열 길이21만큼 반복 */
	{
		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX/10.0)	/* 시력 범위 내에 있다면 해당 시력을 가진 인원을 +1해서 집계한다.*/
		{
			dist[(int)(dat[i].vision *10)]++;	/* 2.1일시 2.1에 해당하는 인원이 +1 된다  main의 vdist[i]에 집계 표출됨*/
		}
	}
}

int main(void)
{
	int i;
	PhysCheck x[] ={				/* 선언한 구조체의 배열을 만든다. */
		{ "일이삼", 162, 0.3 },
		{ "일이사", 162, 1.3 },
		{ "일이육", 180, 2.1 },
		{ "칠이삼", 181, 1.6 },
		{ "구이삼", 175, 1.1 },
		{ "김이삼", 162, 0.8 },
		{ "박이삼", 173, 0.9 },
		{ "나니삼", 162, 0.3 },
	};
	int nx = sizeof(x) / sizeof(x[0]); /* 배열의 길이 구하는 법 = 배열의 크기/배열의 원소하나의 크기 또는 속성(int,char..등등) */
	int vdist[VMAX];
	puts("☆★☆★신체 검사표☆★☆★");
	puts("\t이름\t\t키    시력");
	puts("-----------------------------");

	for ( i = 0; i < nx; i++)
	{
		printf("%-18.18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision); 
	}
		printf("\n 평균 키 : %5.1f cm\n", ave_height(x,nx));
		dist_vision(x,nx, vdist);
		printf("\n 시력분포 \n");
		for ( i = 0; i < VMAX ; i++)
		{
			printf("%3.1f ~ : %d 명\n",i/10.0 ,vdist[i]);/* 집계용 함수 */
		}
		

	return 0;
}
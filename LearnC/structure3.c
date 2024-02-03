#include<stdio.h>
#include<math.h>

//math라이브러리 사용을 위해 해당 파일 컴파일 시
//gcc -o structure3 structure3.c -lm 로 설정해야 math라이브러리를 사용 가능


struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	int xDiff,yDiff;
	double distance;

	printf("1번점의좌표를 입력하세요: ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("2번점의좌표를 입력하세요: ");
	scanf("%d %d", &p2.x, &p2.y);

	xDiff = p1.x *p1.y;
	yDiff = p2.x *p2.y;
	
	distance = sqrt(xDiff * xDiff + yDiff * yDiff);
	printf("두 점사이의 거리는 %f입니다.\n",distance); 

	return 0;

}

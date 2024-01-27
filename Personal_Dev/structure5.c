#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point {
	int x;
	int y;
};

void comparePoint(struct point p1, struct point p2)
{
	if((p1.x ==p2.x )&& (p1.y == p2.y))
	{
		printf("p1과 p2가 같습니다.\n");
	}else{
		printf("p1과 p2가 다릅니다.\n");
	}
}

int main(void)
{
	struct point p1;
	struct point p2;

	printf("처음 p1과  p2의 숫자를 입력해주세요.\n");
	scanf("%d %d",&p1.x, &p1.y);

	printf("두번째 p1과  p2의 숫자를 입력해주세요.\n");
	scanf("%d %d",&p2.x, &p2.y);

	comparePoint(p1,p2);

	return 0;

}

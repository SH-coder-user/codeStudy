// 년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자.
// 입력예시
// 2013.8.5
// 출력예시
// 2013.08.05

#include<stdio.h>

void main()
{
    int y,m,d;
    scanf("%d.%d.%d",&y,&m,&d);

    printf("%04d.%02d.%02d",y,m,d);
}
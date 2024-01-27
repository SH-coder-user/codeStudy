#include<stdio.h>

//포인터는 서로 다른 두 프로그램에서 값을 전달하기에 유용하다. 중요!
//두 변수의 값을 서로 변환하는 포인터 함수
void swap(int *x, int *y)//주소를 전달 받을 때는 *로 포인터선언을 하여받음
{
	int temp;
	temp = *x; //x의 값을 불러옴
	*x = *y;
	*y = temp;
}

int main(void){

	int x = 1;
	int y = 2;
	swap(&x, &y); //전달 시 해당 변수의 주소를 전달함.
	printf("x = %d\ny = %d\n",x,y);
	return 0;
}

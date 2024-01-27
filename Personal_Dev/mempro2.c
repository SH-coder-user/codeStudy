#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, x, y;
	int ** pptr= (int**)malloc(sizeof(int *)* 8);//정수의 포인터를 저장
	for(i = 0; i<8;i++)
	{
		*(pptr+i) = (int *)malloc(sizeof(int) * 6);//정수를 저장 총 48
	}

//초기화
	for(y=0; y<8; y++){
		for(x=0 ; x<6; x++){
			*(*(pptr + y) + x) = 6 * y + x;
		}
	}

	for(y=0; y<8; y++){
		for(x=0 ; x<6; x++){
			printf("%3d", *(*(pptr + y) + x));
		}
		printf("\n");
	}

    for(y =0;y<8 ;y++){
		free(*(pptr +y));//각 행에대한메모리 해제
	}
	free(pptr);//포인터 배열에대한 메모리 해제

	return 0;
}

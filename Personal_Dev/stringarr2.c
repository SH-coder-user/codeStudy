//배열은 내부적으로 포인터와 동일하다!
//strlen 길이구하기 strcmp 문자열크기비교, strcpy 문자열 복사
#include<stdio.h>
#include<string.h>

int main(void){
	char input[5]="love";

	printf("입력한 문자열의 길이는 %d입니다.[%s]\n",strlen(input),input);
	return 0;
}

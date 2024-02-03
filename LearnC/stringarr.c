//배열은 내부적으로 포인터와 동일하다!

#include<stdio.h>
#include<string.h>

int main(void){
	char input[1001];
	gets(input);
	int count = 0;

	while(input[count] != '\0')
	{
		count++;

	}
	printf("입력한 문자열의 길이는 %d입니다.[%s]\n",count,input);
	return 0;
}

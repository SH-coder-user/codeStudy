#include<stdio.h>
#include<stdlib.h> //동적메모리 사용 시 선언

int main(void)
{
	char *pc= NULL;
	int i = 0;
	pc= (char *)malloc(100 * sizeof(char));
	
	if(pc==NULL)
	{
		printf("동적 메모리 할당 실패\n");
		exit(1);
	}
	/*pc가 가르키는 포인터를 1씩 증가시키며 알파벳을 증가시킨다.*/
	
	for(i = 0; i<26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	printf("입력된 문자열 [%s]\n", pc);//문자열은 그자체의 배열이며 포인터이므로 *포함하지 않고  그대로 집어넣는다 

	free(pc);
	return 0;
}

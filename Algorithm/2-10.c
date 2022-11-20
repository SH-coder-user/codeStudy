#include<stdio.h>

int main(void){
	int i,n;
	int prime[500]; /*소수 저장하는 배열*/
	int ptr=0; /*이미 얻은 소수의 개수*/
	unsigned long counter = 0;
	prime[ptr++] =2; 
	for ( n = 3; n <= 1000; n+=2)
	{
		for (i = 0; i < ptr; i++){
			counter++;
			if (n % prime[i]==0)
			{
				break;	/* code */
			}
		}
		if (ptr == i)
		{
			prime[ptr++]=n;	/* 마지막까지 나누어 떨어지지 않았을 경우 배열에 저장 */
		}		/* code */
	}
			for ( i = 0; i < ptr; i++)
		{
			printf("%d\n",prime[i]);	/* code */
		}
		printf("나눗셈을 실행한 횟수 : %lu\n",counter);
		
	return 0;
	
}
/* 리눅스로 업무를 보다 이슈나 정리할 내용이 생겼을 때 리눅스창 닫고 메모장 열어서 적어야하는
 번거로움 때문에 alias로 바로 내용 적어서 저장할 수 있는 시간이 첨부된 메모장(로그)를 만들어 보기로 함. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//#define DEBUG

/*************************************************************************************
 * 	1. 프로그램 식별자 : memo.c
 *  2. 프로그램 개요 : 로그파일로 저장되는 간이 메모장
 *  3. 작성일 : 2022.11.22
 *  4. 변경이력 
*************************************************************************************/

int findDate(int Cnum, char *buff);
int fileWrite(char *file);

int main(){
	char cbuff[1024], dbuff[1024];

	printf("\t\t\t메모장입니다. 문장을 입력해주세요.(계속 입력가능)\
	글을 끝내려면\"end\" 문장 입력 또는 ctrl + c 키로 종료합니다.");

	while (1)
	{
		memset(cbuff,0x00,sizeof(cbuff));
		findDate(1,cbuff);	/* 	날짜 입력하기 예시 (입력후)>>>	[2022-01-31 14:03:11] 메모장을 입력하셨습니다. */
		fgets(dbuff,sizeof(dbuff),stdin); /* 필요문장 만큼 입력 받기, 특수문자 입력가능, 띄어쓰기 가능, 줄바꿈 엔터 칠 때 다음진행하면서 날짜 입력됨. */
		if(strncmp(dbuff,"end",3)==0 || strncmp(dbuff,"END",3)==0)
		{
			printf("입력이 종료되었습니다. \n");
			fileWrite("\n");
			break;
		}
		strncat(cbuff,dbuff,sizeof(dbuff));
		fileWrite(cbuff); /* 파일에 입력하기 */
	}

		return 0;
}

int fileWrite(char *file) /* 메모장 파일로 저장 하기 */
{
	FILE *fp;
	char ch;
	char dbuff[1024];
	memset(dbuff,0x00,sizeof(dbuff));

	findDate(2, dbuff);
	fp = fopen(dbuff, "a");
	if (fp == NULL)
	{
		printf("%s 파일열기 실패 \n", file[1]);
		return -1;
	}
	fprintf(fp,file);
	fclose(fp);
	return 0;

}

int findDate(int Cnum, char *buff)
{
	struct tm* t;
	time_t base = time(NULL);

	t=localtime(&base);
#ifdef DEBUG
	printf("[%d-%d-%d %d:%d:%2d]",t->tm_year+1900, t->tm_mon+1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec );
#endif
	if (Cnum ==1)
	{
		sprintf(buff,"[%d-%d-%d %d:%d:%2d] ",t->tm_year+1900, t->tm_mon+1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec); /* 날짜 반환하기 */
		
	}else if (Cnum==2)
	{
		sprintf(buff,"/home/test/memolog/DailyMemo-%d%d%d.log",t->tm_hour, t->tm_min, t->tm_sec); /* 저장할 양식 선택, 리눅스의 절대경로안에 어떤형식으로 저장할지 만듬. */
	}else{
		printf("입력 오류, 지정된 형식이 아니거나 할당할 수 없는 내용입니다. 다시 확인해주세요.");
		return -1;
	}

	return 0;
	
}
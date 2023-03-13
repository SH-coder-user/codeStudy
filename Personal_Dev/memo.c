/* �������� ������ ���� �̽��� ������ ������ ������ �� ������â �ݰ� �޸��� ��� ������ϴ�
 ���ŷο� ������ alias�� �ٷ� ���� ��� ������ �� �ִ� �ð��� ÷�ε� �޸���(�α�)�� ����� ����� ��. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//#define DEBUG

/*************************************************************************************
 * 	1. ���α׷� �ĺ��� : memo.c
 *  2. ���α׷� ���� : �α����Ϸ� ����Ǵ� ���� �޸���
 *  3. �ۼ��� : 2022.11.22
 *  4. �����̷� 
*************************************************************************************/

int findDate(int Cnum, char *buff);
int fileWrite(char *file);

int main(){
	char cbuff[1024], dbuff[1024];

	printf("\t\t\t�޸����Դϴ�. ������ �Է����ּ���.(��� �Է°���)\
	���� ��������\"end\" ���� �Է� �Ǵ� ctrl + c Ű�� �����մϴ�.");

	while (1)
	{
		memset(cbuff,0x00,sizeof(cbuff));
		findDate(1,cbuff);	/* 	��¥ �Է��ϱ� ���� (�Է���)>>>	[2022-01-31 14:03:11] �޸����� �Է��ϼ̽��ϴ�. */
		fgets(dbuff,sizeof(dbuff),stdin); /* �ʿ乮�� ��ŭ �Է� �ޱ�, Ư������ �Է°���, ���� ����, �ٹٲ� ���� ĥ �� ���������ϸ鼭 ��¥ �Էµ�. */
		if(strncmp(dbuff,"end",3)==0 || strncmp(dbuff,"END",3)==0)
		{
			printf("�Է��� ����Ǿ����ϴ�. \n");
			fileWrite("\n");
			break;
		}
		strncat(cbuff,dbuff,sizeof(dbuff));
		fileWrite(cbuff); /* ���Ͽ� �Է��ϱ� */
	}

		return 0;
}

int fileWrite(char *file) /* �޸��� ���Ϸ� ���� �ϱ� */
{
	FILE *fp;
	char ch;
	char dbuff[1024];
	memset(dbuff,0x00,sizeof(dbuff));

	findDate(2, dbuff);
	fp = fopen(dbuff, "a");
	if (fp == NULL)
	{
		printf("%s ���Ͽ��� ���� \n", file[1]);
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
		sprintf(buff,"[%d-%d-%d %d:%d:%2d] ",t->tm_year+1900, t->tm_mon+1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec); /* ��¥ ��ȯ�ϱ� */
		
	}else if (Cnum==2)
	{
		sprintf(buff,"/home/test/memolog/DailyMemo-%d%d%d.log",t->tm_hour, t->tm_min, t->tm_sec); /* ������ ��� ����, �������� �����ξȿ� ��������� �������� ����. */
	}else{
		printf("�Է� ����, ������ ������ �ƴϰų� �Ҵ��� �� ���� �����Դϴ�. �ٽ� Ȯ�����ּ���.");
		return -1;
	}

	return 0;
	
}
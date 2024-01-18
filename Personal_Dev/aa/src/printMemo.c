#include"printMemo.h"


int main(void){
	
	char getstr[100 +1];

	memset(&getstr,0x00,sizeof(getstr));

	printf("안녕하세용 입출력을 위한 문자 입력해주세요\n");

	scanf("%s",getstr);

	while(1){
		if(strcmp(getstr,"")==0){
			printf("입력하신 문장이 없습니다 다시 입력해주세요.\n");
		}else{
			printf("입력하신 문장은 [%s]입니다.\n",getstr);
			break;
		}
	}
	return 0;
}

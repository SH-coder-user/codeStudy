#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//goto문은 프로그래머들사이에서 스파게티코드로 터부시된다. 점점 코드의 양이 많아져 꼬이기때문.
//그냥 if문이나 다른 대체할 것들로 처리를 하는게 좋다.

int main()
{
    int num1;

    scanf("%d", &num1);

    if (num1 == 1)         // num1이 1이면
        goto ONE;          // 레이블 ONE으로 즉시 이동
    else if (num1 == 2)    // num1이 2이면
        goto TWO;          // 레이블 TWO로 즉시 이동
    else                   // 1도 아니고 2도 아니면
        goto EXIT;         // 레이블 EXIT로 즉시 이동

ONE:    // 레이블 ONE
    printf("1입니다.\n");
    goto EXIT; // 레이블 EXIT로 즉시 이동

TWO:    // 레이블 TWO
    printf("2입니다.\n");
    goto EXIT; // 레이블 EXIT로 즉시 이동

EXIT:    // 레이블 EXIT
    return 0;
}
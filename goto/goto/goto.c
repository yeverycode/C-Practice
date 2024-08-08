#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
    /*int num1;
    scanf("%d", &num1);

    if (num1 == 1)
        goto ONE;
    else if (num1 == 2)
        goto TWO;
    else
        goto EXIT;

ONE:
    printf("1입니다\n");
    goto EXIT; //레이블 EXIT 로 이동
TWO:
    printf("2입니다.\n");
    goto EXIT; // 레이블 EXIT 로 이동
EXIT:
    return 0; */

    //20이 되면 루프를 빠져나오는 코드

    int num1 = 0;

    bool exitOuterLoop = false; // 바깥쪽 루프를 빠져나올지 결정하는 루프
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (num1 == 20) {
                exitOuterLoop = true;
                break;
            }
            num1++;
        }
        if (exitOuterLoop == true)
            break;
    }
    printf("%d\n", num1);

    // go to 사용
    int num2 = 0;
    for (int k = 0; k < 10; k++) {
        for (int l = 0; l < 10; l++) {
            if (num2 == 20)
                goto EXIT; 
            
            num2++;
        }
    }

EXIT:
    printf("%d\n", num2);

    return 0;
}
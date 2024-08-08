#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num1;
    scanf("%d", &num1); // 값을 입력받음

   /* switch (num1) {
    case 1:
    case 2:
        printf("1 또는 2입니다.\n");
        break;
    case 3:
    case 4:
        printf("3 또는 4입니다.\n");
        break;
    default: // 아무것도 해당하지 않을 때
        printf("defalut.\n");
        break;
    }*/

    switch (num1) {
    case 1:
    {
        int num2 = num1; // case 안에서 변수를 선언
        printf("%d입니다.\n", num2);
        break;
    }
    case 2:
        printf("2입니다.\n");
        break;
    default:
        printf("default.\n");
        break;
    }

    char c1;
    scanf("%c", &c1);
    switch (c1) {
    case 'a':
        printf("a입니다.\n");
        break;
    case 'b':
        printf("b입니다.\n");
        break;
    default:
        printf("default.\n");
        break;
    }

    return 0;
}
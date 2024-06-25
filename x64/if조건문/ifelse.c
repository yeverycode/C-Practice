#include <stdio.h>
int main() {

    int num1 = 5;
    if (num1 == 10)
        printf("10입니다\n");

    else
        printf("10이 아닙니다.\n");

    /*if 조건문의 동작 방식 : 0 만 아니면 무조건 참이다. 0.0f , 0 만 아니면 참*/
    if (2)
        printf("참\n");
    else
        printf("거짓\n");

    if (num1 = 10)
        printf("10입니다.\n"); // num1에 10을 할당하였기 때문에 항상 참이다.

    int num2 = 10; 
    int num3 = 20;
    if (num2 == 10 && num3 == 20)
        printf("참\n");
    else
        printf("거짓\n");

    return 0;
}
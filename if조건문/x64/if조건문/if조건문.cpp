#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num1 = 10;
    if (num1 == 10) {// if 조건문 끝에는 세미콜론을 붙이면 안된다.
        printf("10입니다.\n");
    }

    int num2 = 5;
    if (num2 == 5)
        printf("5입니다.\n"); // 조건문이 한 줄이면 괄호 생략 가능

    float num3 = 0.1f;
    char c1 = 'a';

    if (num3 == 0.1f) // 실수 비교
        printf("0.1입니다.\n");

    if (c1 == 'a')
        printf("a입니다.\n");

    if (c1 == 97)
        printf("a입니다\n"); //문자를 아스키코드로 비교

    int num5;
    scanf("%d", &num5); // 입력 받은 값 저장

    if (num5 == 10) {
        printf("10입니다.\n");
    }

    if (num5 == 20) {
        printf("20입니다.\n");
    }

    return 0;
}
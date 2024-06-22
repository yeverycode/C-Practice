#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*연습문제 
    char c1 = 'a';
    char num2 = c1;
    printf("%c\n", num2); */

    // 심사문제
    float num1;
    scanf("%f", &num1);
    int num2 = num1;
    printf("%d", num2);
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*연습문제 1
    int num1 = 15;
    int num2 = 27;
    int num3 = 3;
    num1 %= num3;
    num2 %= num3;

    printf("%d\n", num1);
    printf("%d\n", num2); */

    int num1;
    scanf("%d", &num1);
    int digits1, digits2, digits3, digits4, digits5;
    digits1 = num1 % 10;
    num1 /= 10;
    digits2 = num1 % 10;
    num1 /= 10;
    digits3 = num1 % 10;
    num1 /= 10;
    digits4 = num1 % 10;
    num1 /= 10;
    digits5 = num1 % 10;

    printf("%d %d %d %d %d", digits1, digits2, digits3, digits4, digits5);
    return 0;
}
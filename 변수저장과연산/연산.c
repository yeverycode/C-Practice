#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*
    int num1, num2;
    num1 = 1 + 2; // 1에서 2 더하기
    num2 = 1 - 2; // 1에서 2 빼기

    printf("%d\n", num1);
    printf("%d\n", num2);

    float num3, num4;
    num3 = 1.0f + 0.456789f;
    num4 = 1.0f - 0.456789f;

    printf("%f\n", num3);
    printf("%f\n", num4); */

   /* int num1 = 1;
    int num2 = 1;
    num1 += 2;
    num2 -=2;
    printf("%d\n", num1);
    printf("%d\n", num2); */

    int num1;
    int num2 = 5;
    num1 = 10 - num2; //5
    num1 += 95;
    printf("%d\n", num1);

    float num3;
    float num4;
    float num5;

    scanf("%f %f", &num3, &num4);
    num5 = num3 + num4;
    num5 -= 4.5;
    printf("%f\n", num5);
    return 0;
}
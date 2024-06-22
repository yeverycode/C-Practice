#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*연습문제 1
    int num1 = 2;
    int num2 = 8;
    int num3, num4;

    num1++; // num1 = num1 + 1
    num3 = --num1;  // num3 = num1

    --num2; // num2= num2-1
    num4 = num2++; //num4= num2-1

    printf("%d\n", num3);
    printf("%d\n", num4); */

    int num1; 
    float num2;
    char c1;

    scanf("%d %f %c", &num1, &num2, &c1);

    ++num1;
    ++num2;
    --c1;
    printf("%d %f %c\n", num1, num2, c1);


    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    /*char c1;

    do {
        scanf("%c", &c1);
    } while (c1 != 'q');

    printf("프로그램 종료\n"); */

    unsigned int num1;
    unsigned int sum = 0;

    scanf("%u", &num1);

    unsigned int i = 0;
    do {
        sum += i;
        i++;
    } while (i <=  num1);

    printf("%u\n", sum);

    return 0;
}
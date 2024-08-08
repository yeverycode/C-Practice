#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char c1 = 'k';
    if (c1 == 'k')
        printf("k입니다.\n");

    int age; //만 나이
    scanf("%d", &age);

    if (age < 18)
        printf("청소년 관람 불가\n");

    return 0;
}
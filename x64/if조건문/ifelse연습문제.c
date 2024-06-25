#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*연습문제 1
    unsigned long long num1 = 0 ;

    if (num1)
        printf("참\n");
    else
        printf("거짓\n"); */

    /*연습문제 2
    int writtenTest = 78;
    int toeic = 870;

    if (writtenTest >= 80 && toeic >= 850)
        printf("합격\n");
    else
        printf("불합격\n"); */

    // 심사문제
    /*char c1;
    scanf("%c", &c1);
    if (c1 == 'a')
        printf("a입니다.\n");
    else
        printf("a가 아닙니다.\n");*/

    /* 심사문제2
    int kor, eng, math, science;
    double avg = 0;

    scanf("%d %d %d %d", &kor, &eng, &math, &science);
    if (kor >= 0 && kor <= 100 && eng >= 0 && eng <= 100 && math >= 0 && math <= 100 && science >= 0 && science <= 100) {
        avg = (kor + eng + math + science) / 4;

        if (avg >= 85) {
            printf("합격");
        }
        else
            printf("불합격");

    }

    else
        printf("잘못된 점수"); */

    /*연습문제
    char c1 = 'c';

    if (c1 == 'a')
        printf("a\n");
    else if (c1 == 'b')
        printf("b\n");
    else if (c1 == 'c')
        printf("c\n");
    else if (c1 == 'd')
        printf("d\n");
    else
        printf("x\n"); */

    // 심사문제 : 교통카드 시스템
    int age; // 만나이
    int money = 10000;

    scanf("%d", &age);
    if (age >= 7 && age <= 12)
        money -= 450;
    else if (age >= 13 && age <= 18)
        money -= 720;
    else
        money -= 1200;

    printf("%d", money);


    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    /*
    int i = 0;
    do {
        printf("Hello,world %d!\n", i); // i 함께 출력
        i++;
    } while (i < 100);

    //do 에 해당하는 부분
    printf("Hello, world! %d\n", i); //처음 한 번은 실행
    i++;
    while (i < 100) {
        printf("Hello, world!\n");
        i++;
    }

    // 초기값 1부터 시작
    int j = 1;
    do {
        printf("Hello, world!\n");
        j++;
    } while (j <= 100);

    // 초기값 감소
    int k = 100;
    do {
        printf("Hello, world! %d\n", k);
        k--;
    } while (k > 0); */

    int i;
    scanf("%d", &i);

    int j = 0;
    do {
        printf("Hello, world! %d\n", j);
        j++;
    } while (j < i);

    do {
        printf("Hello, world! %d\n", i);
        i--;
    } while (i > 0);

    srand(time(NULL));
    int k = 0;
    do {
        k = rand() % 10; // rand 함수를 사용하여 무작위로 정수를 생성하고 10 미만의 숫자로 만든다.

        printf("%d\n", k);
    } while (k != 3);

    // 무한루프
    /* do {
        printf("Hello, world!");
    } while (1); */

    // 한 번만 실행
    do {
        printf("Hello, world!");
    } while (0);

    return 0;
}
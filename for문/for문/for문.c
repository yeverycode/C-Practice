#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 100; i++) {
        printf("Hello world!\n");
    }
    printf("%d\n", i);

    // 초기값을 감소시키는 방법
    for (int j = 100; j > 0; j--) {
        printf("Hello world! %d\n", j);
    }
    
    int count;
    scanf("%d", &count);
    for (int k = 0; k < count; k++) {
        printf("Hello, world!\n");
    }

    // 초기값을 감소시키는 방법
    for (int l = count; l > 0; l--) {
        printf("Hello, world!\n");
    }

    for (; count > 0; count--) {
        printf("Hello,world! %d\n", count); // 초기값 없이 scanf에서 변수를 감소시켜 반복
    }

    // 변수 두개 사용하기
    for (int a = 0, b = 0; a < 10; a++, b += 2) {
        printf("a: %d, b: %d\n", a, b);
    }

    // for 문 무한루프
    for (;;) {
        printf("Hello, world!\n");
    } // 초깃값, 조건식, 변화식을 모두 생략하면 무한루프다.
    return 0;
}
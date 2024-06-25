#include <stdio.h>
int main() {
    printf("%d\n", 1 && 1); // 참이다.
    printf("%d\n", 1 && 0); // 거짓이다. (0이 있어서)
    printf("%d\n", 0 && 1); // 거짓이다.
    printf("%d\n", 0 && 0); // 거짓이다.

    printf("%d\n", 0 || 1); // 참이다.
    printf("%d\n", 1 || 1); // 참이다.
    printf("%d\n", 0 || 0); // 거짓이다.

    printf("%d\n", 2 && 3); // 참이다.

    // Not 연산자 !
    printf("%d\n", !1); // NOT 1은 거짓
    printf("%d\n", !0); // NOT 0은 참
    printf("%d\n", !3); // NOT 3은 거짓

    // 조건식 if 와 논리연산자
    int num1 = 20;
    int num2 = 10;
    int num3 = 30;
    int num4 = 15;

    printf("%d\n", num1 > num2 && num3 > num4); // 1 양쪽 모두 참이므로 1이 출력
    printf("%d\n", (num1 > num2) && (num3 < num4)); // 앞만 참이므로 거짓
    printf("%d\n", (num1 > num2) || (num3 < num4)); 
    printf("%d\n", (num1 < num2) || (num3 < num4));

    printf("%d\n", !(num3 < num4)); // 거짓을 반대로, 참이 된다.

    if (num1 && num2) // num1과 num2가 모두 참인지 검사한다.
        printf("참\n");
    else
        printf("거짓\n"); 

    if (num1 || num2) // 둘 중 하나가 참인지 검사
        printf("참\n");
    else
        printf("거짓\n");

    if (!num1)
        printf("참\n");
    else
        printf("거짓\n");

    int num5 = 0;
    int num6 = 1;

    if (num5 && num6)
        printf("참\n"); // 첫번째 값이 거짓이면 두번째는 검사하지 않고 거짓이다.
    else
        printf("거짓\n");

    if (num5 || num6)
        printf("참\n");
    else
        printf("거짓\n");

    printf("%s\n", (num5 && num6) ? "참" : "거짓");
    printf("%s\n", (num5 || num6) ? "참" : "거짓");

    return 0;
}
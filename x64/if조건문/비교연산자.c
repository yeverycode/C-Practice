#include <stdio.h>
int main() {
    /*int num1 = 10;

    printf("%d\n", num1 == 10); //1: num1이 10과 같은지
    printf("%d\n", num1 != 5); // 1: num1이 5와 다른지 

    printf("%d\n", num1 > 10); // 0:num1이 10보다 큰지
    printf("%d\n", num1 < 10); // 0: num1이 10보다 작은지

    printf("%d\n", num1 >= 10); // 1: num1이 10보다 크거나 같은지
    printf("%d\n", num1 <= 10); 

    // 삼항연산자
    int num2 = 5;
    int num3;

    if (num2)
        num3 = 100;
    else
        num3 = 200; // num2가 거짓이면 200 할당

    num3 = num2 ? 100 : 200;
    printf("%d\n", num3);

    int num4 = 10;
    int num5;

    num5 = (num4 == 10) ? 100 : 20; //num4가 10이면 num2에 100 할당, 아니면 20 할당

    printf("%d\n", num5); */

    int num1 = 10;

    if (num1 == 10) //num1이 10과 같은지 검사
        printf("10입니다.\n");
    if (num1 != 5) // num1이 5와 다른지 검사
        printf("5와 다릅니다.\n");
    if (num1 > 10) // num1이 10보다 큰지 검사
        printf("10보다 큽니다.\n");
    if (num1 < 10)
        printf("10보다 작습니다.\n");
    if (num1 >= 10)
        printf("10보다 크거나 같습니다.\n");
    if (num1 <= 10)
        printf("10보다 작거나 같습니다.\n");

    float num2 = 0.1f;
    char c1 = 'a';

    if (num2 >= 0.09f) // num1이 실수 0.09보다 크거나 같은지 검사
        printf("0.09보다 크거나 같습니다.\n");
    if (c1 == 'a')
        printf("a입니다.\n");
    if (c1 == 97)
        printf("97입니다.\n");
    if (c1 < 'b')
        printf("b보다 작습니다.\n");

    int num3 = 5;
    printf("%s\n", num3 == 10 ? "10입니다." : "10이 아닙니다.");



    return 0;
}
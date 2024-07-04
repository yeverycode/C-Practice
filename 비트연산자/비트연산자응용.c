#include <stdio.h>
int main() {

    unsigned char num1 = 1;
    // 2의 거듭제곱 구하기
    printf("%u\n", num1 << 1); 
    printf("%u\n", num1 << 2);
    printf("%u\n", num1 << 3);
    printf("%u\n", num1 << 4);
    printf("%u\n", num1 << 5);
    printf("%u\n", num1 << 6);
    printf("%u\n", num1 << 7);

    unsigned char num2 = 240;
    unsigned char num3 = 15;
    
    unsigned char num4, num5;
    num4 = num2 << 2;
    num5 = num3 >> 2;

    printf("%u\n", num4);
    printf("%u\n", num5);

    char c1 = -125; // 부호 있는 자료형
    char c2;
    c2 = c1 >> 5; // 오른쪽으로 5번 이동, 모자라는 공간은 부호비트의 값인 1로 채워진다.
    printf("%d\n", c2);

    char c3 = 113; 
    char c4 = -15;
    char c5, c6, c7, c8;

    c5 = c3 << 2;
    c6 = c4 << 2;
    c7 = c3 << 4;
    c8 = c4 << 4;
    printf("%d\n", c5); // 1100 0100 : 부호 비트를 덮어쓰게 되므로 양수에서 음수가 된다.
    printf("%d\n", c6); // 이미 음수인 수는 계속 음수

    printf("%d\n", c7);
    printf("%d\n", c8);
    return 0;
}
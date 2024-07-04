#include <stdio.h>
int main() {
    unsigned char num1 = 1; // 0000 0001
    unsigned char num2 = 3; // 0000 0011

    printf("%d\n", num1 & num2); // 0000 0001
    printf("%d\n", num1 | num2);  // 0000 0011
    printf("%d\n", num1 ^ num2); // 0000 0010
    
    unsigned char num3 = 162;
    unsigned char num4;

    num4 = ~num3;
    printf("%u\n", num4);

    unsigned char num5 = 3;
    unsigned char num6 = 24;

    printf("%u\n", num5 << 3); //비트 값 왼쪽 3번 이동
    printf("%d\n", num6 >> 2); // 오른쪽 2번 이동

    // 비트 연산 후 할당하기
    unsigned char c1 = 4;
    unsigned char c2 = 4;
    unsigned char c3 = 4;
    unsigned char c4 = 4;
    unsigned char c5 = 4;

    c1 &= 5; 
    c2 |= 2;
    c3 ^= 3;
    c4 <<= 2;
    c5 >>= 2;

    printf("%u\n", c1);
    printf("%u\n", c2);
    printf("%u\n", c3);
    printf("%u\n", c4);
    printf("%u\n", c5);

    return 0;

}
#define __USE_MINGW_ANSI_STDIO 1 // Dev-c++(MinGW)에서 %hhu 를 사용하기 위한 설정
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    /* unsigned char flag1 = 1 << 7; // 1을 이동시키는 수만큼 2의 거듭제곱. 2의 7승
    unsigned char flag2 = 1 << 3; // 2의 3승

    flag1 |= 1 << 2;
    flag1 &= 1 << 2; // flag1 &= ~(1<<7);
    flag2 ^= 1 << 3;

    printf("%u %u\n", flag1, flag2);*/

    unsigned char flag = 16;
    unsigned char num1, num2;

    scanf("%hhu %hhu", &num1, &num2);

    num1 = num1 << 3;
    flag |= num1;

    num2 = num2 >> 2;
    flag &= ~(num2);

    flag ^= 128; // flag의 첫번째 비트 토글하기 (켜져있는거 끄고 , 꺼진 건 켜기) , ~번째 비트 = (8-n) 승
    printf("%u\n", flag);

    return 0;
}
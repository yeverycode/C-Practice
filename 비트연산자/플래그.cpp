#include <stdio.h>
int main() {
    /* unsigned char flag = 0; // 플래그

    flag |= 1; // 0000 0001 마스크와 비트 OR로 여덟번째 비트를 킴.
    flag |= 2; // 0000 0010 마스크와 비트 OR 로 일곱번째 비트를 킴.
    flag |= 4;  // 0000 0100 마스크와 비트 OR 로 일곱번째 비트를 킴.

    // 1,2,4 를 마스크 라고 부른다.

    printf("%u\n", flag); // 7 : 0000 0111

    if (flag & 1)
        printf("0000 0001은 켜져 있음 \n");
    else
        printf("0000 0001은 꺼져 있음 \n");
    
    if (flag & 2)
        printf("0000 0010은 켜져 있음\n");
    else
        printf("0000 0010은 꺼져 있음\n");

    if (flag & 4)
        printf("0000 0100은 켜져 있음\n");
    else
        printf("0000 0100은 꺼져 있음\n"); */

    unsigned char flag = 7;
    flag &= ~2; // 1111 1101 , 마스크 값 2의 비트를 뒤집은 뒤 AND로 일곱번째 비트를 끈다.
    printf("%u\n", flag);

    if (flag & 1)
        printf("0000 0001은 켜져 있음\n");
    else
        printf("0000 0001은 꺼져 있음\n");

    if (flag & 2)
        printf("0000 0010은 켜져 있음\n");
    else
        printf("0000 0010은 꺼져 있음\n");

    if (flag & 4)
        printf("0000 0100은 켜져 있음\n");
    else
        printf("0000 0100은 꺼져 있음\n");

    unsigned char flag1 = 7;
    flag1 ^= 2;
    flag1 ^= 8;
    printf("%u\n", flag1);

    if (flag1 & 1)
        printf("0000 0001은 켜져 있음\n");
    else
        printf("0000 0001은 꺼져 있음\n");

    if (flag1 & 2)
        printf("0000 0010은 켜져 있음\n");
    else
        printf("0000 0010은 꺼져 있음\n");

    if (flag1 & 4)
        printf("0000 0100은 켜져 있음\n");
    else
        printf("0000 0100은 꺼져 있음\n");

    return 0;
}
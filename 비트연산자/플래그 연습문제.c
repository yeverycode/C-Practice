#define __USE_MINGW_ANSI_STDIO 1 // Dev-c++(MinGW)���� %hhu �� ����ϱ� ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    /* unsigned char flag1 = 1 << 7; // 1�� �̵���Ű�� ����ŭ 2�� �ŵ�����. 2�� 7��
    unsigned char flag2 = 1 << 3; // 2�� 3��

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

    flag ^= 128; // flag�� ù��° ��Ʈ ����ϱ� (�����ִ°� ���� , ���� �� �ѱ�) , ~��° ��Ʈ = (8-n) ��
    printf("%u\n", flag);

    return 0;
}
#include <stdio.h>
int main() {
    /* unsigned char flag = 0; // �÷���

    flag |= 1; // 0000 0001 ����ũ�� ��Ʈ OR�� ������° ��Ʈ�� Ŵ.
    flag |= 2; // 0000 0010 ����ũ�� ��Ʈ OR �� �ϰ���° ��Ʈ�� Ŵ.
    flag |= 4;  // 0000 0100 ����ũ�� ��Ʈ OR �� �ϰ���° ��Ʈ�� Ŵ.

    // 1,2,4 �� ����ũ ��� �θ���.

    printf("%u\n", flag); // 7 : 0000 0111

    if (flag & 1)
        printf("0000 0001�� ���� ���� \n");
    else
        printf("0000 0001�� ���� ���� \n");
    
    if (flag & 2)
        printf("0000 0010�� ���� ����\n");
    else
        printf("0000 0010�� ���� ����\n");

    if (flag & 4)
        printf("0000 0100�� ���� ����\n");
    else
        printf("0000 0100�� ���� ����\n"); */

    unsigned char flag = 7;
    flag &= ~2; // 1111 1101 , ����ũ �� 2�� ��Ʈ�� ������ �� AND�� �ϰ���° ��Ʈ�� ����.
    printf("%u\n", flag);

    if (flag & 1)
        printf("0000 0001�� ���� ����\n");
    else
        printf("0000 0001�� ���� ����\n");

    if (flag & 2)
        printf("0000 0010�� ���� ����\n");
    else
        printf("0000 0010�� ���� ����\n");

    if (flag & 4)
        printf("0000 0100�� ���� ����\n");
    else
        printf("0000 0100�� ���� ����\n");

    unsigned char flag1 = 7;
    flag1 ^= 2;
    flag1 ^= 8;
    printf("%u\n", flag1);

    if (flag1 & 1)
        printf("0000 0001�� ���� ����\n");
    else
        printf("0000 0001�� ���� ����\n");

    if (flag1 & 2)
        printf("0000 0010�� ���� ����\n");
    else
        printf("0000 0010�� ���� ����\n");

    if (flag1 & 4)
        printf("0000 0100�� ���� ����\n");
    else
        printf("0000 0100�� ���� ����\n");

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS     // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // strcpy �Լ��� ����� ��� ����

union Box {    // ����ü ����
    short candy;
    float snack;
    char doll[8];
};

int main()
{
    union Box* b1 = malloc(sizeof(union Box));    // ����ü ������ ����, �޸� �Ҵ�

    printf("%d\n", sizeof(union Box));    // 8: ����ü�� ��ü ũ��� ���� ū �ڷ����� ũ��

    strcpy(b1->doll, "bear");     // doll�� ���ڿ� bear ����

    printf("%d\n", b1->candy);    // 25954
    printf("%f\n", b1->snack);    // 4464428256607938511036928229376.000000
    printf("%s\n", b1->doll);     // bear

    free(b1);    // ���� �޸� ����

    return 0;
}
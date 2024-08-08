#include <stdio.h>

union Data {    // ����ü ����
    char c1;
    short num1;
    int num2;
};

int main()
{
    union Data d1;    // ����ü ���� ����

    d1.num2 = 0x12345678;    // ��Ʋ ����𿡼��� �޸𸮿� ����� �� 78 56 34 12�� �����

    printf("0x%x\n", d1.num2);    // 0x12345678: 4����Ʈ ��ü �� ���
    printf("0x%x\n", d1.num1);    // 0x5678: ���� 2����Ʈ ���� ���
    printf("0x%x\n", d1.c1);      // 0x78: ���� 1����Ʈ ���� ���

    printf("%d\n", sizeof(d1));   // 4: ����ü�� ��ü ũ��� ���� ū �ڷ����� ũ��

    return 0;
}
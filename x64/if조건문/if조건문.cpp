#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num1 = 10;
    if (num1 == 10) {// if ���ǹ� ������ �����ݷ��� ���̸� �ȵȴ�.
        printf("10�Դϴ�.\n");
    }

    int num2 = 5;
    if (num2 == 5)
        printf("5�Դϴ�.\n"); // ���ǹ��� �� ���̸� ��ȣ ���� ����

    float num3 = 0.1f;
    char c1 = 'a';

    if (num3 == 0.1f) // �Ǽ� ��
        printf("0.1�Դϴ�.\n");

    if (c1 == 'a')
        printf("a�Դϴ�.\n");

    if (c1 == 97)
        printf("a�Դϴ�\n"); //���ڸ� �ƽ�Ű�ڵ�� ��

    int num5;
    scanf("%d", &num5); // �Է� ���� �� ����

    if (num5 == 10) {
        printf("10�Դϴ�.\n");
    }

    if (num5 == 20) {
        printf("20�Դϴ�.\n");
    }

    return 0;
}
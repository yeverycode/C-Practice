#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
int main() {
    /*
    int num1, num2;

    printf("������ �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2); // ǥ�� �Է��� �޾Ƽ� ������ ����

    printf("%d %d\n", num1, num2); // ���� ���� ���


    float num3;
    printf("�Ǽ��� �Է��ϼ���: ");
    scanf("%f", &num3); // �Ǽ��� �Է¹޾Ƽ� ������ ����
    printf("%f\n", num3);

    double num4;
    printf("�Ǽ��� �Է��ϼ���: ");
    scanf("%lf", &num4);
    printf("%lf", num4); */

    char c1;
    printf("���ڸ� �Է��ϼ���: ");
    scanf("%c", &c1);
    printf("%c\n", c1); // ���� ���� ���

    // getchar �̿� ���
    char c2 = getchar(); // ���� �ϳ� �Է¹���
    printf("%c", c2);
    return 0;

    char c3 = 'a';
    putchar(c3);

}
#include <stdio.h>

int main() {
    int num1 = 1;
    num1++; // ������ ������ �� 1 ����
    printf("%d\n", num1);

    num1--;
    printf("%d\n", num1);

    // �Ǽ� �ڷ���

    float num2 = 2.1f;
    float num3 = 2.1f;

    num2++; // �Ǽ��� ���� 1 ����
    num3--; // �Ǽ��� ���� 1 ����

    printf("%f %f\n", num2, num3);

    // ���� �ڷ���
    
    char c1 = 'b';
    char c2 = 'b';
    c1++; // ���� �ڷ��� ������ ���� 1 ������Ŵ, 'c'�� �ٲ�
    c2--;  // ���� �ڷ��� ������ ���� 1 ���ҽ�Ŵ, 'a'�� �ٲ�

    printf("%c %c\n", c1, c2);

    int num9 = 12;
    int num10;
    num10 = num9++; // num2�� ���� num1 ���� �Ҵ�, num2�� 12�� ��
    printf("%d", num10);
    return 0;
}
#include <stdio.h>

void swapNumber(int first, int second)    // ��ȯ�� ����, int�� �Ű����� �� �� ����
{
    int temp;    // �ӽ� ���� ����

    temp = first;
    first = second;
    second = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    swapNumber(num1, num2);    // ���� num1�� num2�� �־���

    printf("%d %d\n", num1, num2);    // 10 20: swapNumber �Լ��ʹ� ������� 
    // ó�� ������ 10�� 20�� ��µ�

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y);
int power(int x);

int sum(int x, int y) // �Ű����� (parameter)
{
    int sum = x + y; // ��������
    //printf("%d\n", sum);
    return sum; // return ��°� : ���� �� ���� ���� (������ ��� �Ұ�)
}

int power(int x)
{
    int result = x * x; // ���� ����� return , �Լ� ���� �ٲ���� ��(��� �ڷ����� �����ϰ�)
    return result;
}

int main() {
    double re;
    re = sum(2345, 87) * 1234 / 2.8;
    printf("%f\n", re);
    int result;
    result = power(2);
    printf("%d\n", result);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*
    // �迭�� ũ��� �ʱ�ȭ ������ ���� ��쿡�� �迭�� ũ�� ���� ����
    int a[5] = { 1,2,3,4,5 };
    int a[] = { 1,2,3,4,5 }; // ���� ����

    char digits[10] = "dkssudgk";
    // 9 ���� ������ ������ ����. 

    // ���� ������ ���ڿ�
    char digits[] = "4912";
    int num1 = atoi(digits);
    int sum1=0;
    int sum2 = 0;

    int len = strlen(digits);
    int k;
    for (int i = 0; i < len; i++) {
        k = num1 % 10;

        if (k % 2 == 0) {
            sum2 += k;
        }
        else
            sum1 += k;

        num1 = num1 / 10;
    }

    printf("%d\n", sum1);
    printf("%d\n", sum2);

    // ���� ���� ���ڿ� �ƽ�Ű�ڵ�� ��ȯ�ϴ� ��� */
    char digits[] = "4912";
    int evenSum = 0, oddSum = 0;
    int i, digit;

    for (i = 0; digits[i] != '\0'; i++) {
        digit = digits[i] - 48; // �� ���� ���ڸ� ���� ��ȯ
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    /*int num1 = 0;

    while (1) {
        num1++; // num�� 1�� ���� ��Ŵ

        printf("%d\n", num1);

        if (num1 == 100)
            break; // num1�� 100�� �� �ݺ����� ������. while�� ��� �����.
    }

    for (int i = 1; i <= 100; i++) {

        if (i % 2 != 0) // i�� 2�� �������� �� �������� 0�� �ƴϸ� Ȧ����, �Ʒ� �ڵ带 �������� �ʰ� �ǳ� ��.
            continue;

        printf("%d\n", i);
    }

    int j = 1;
    while (j <= 100) {
        j++;

        if (j % 2 != 0)
            continue;

        printf("%d\n", j);
    } */

    int count;
    scanf("%d", &count);

    int i = 1;
    while (1) {
        printf("%d\n", i);
        if (i == count)
            break;

        i++;
    }

    // �Է��� ���ڱ��� ¦�� ����ϱ�
    int j = 1;
    while (j<count) {
        j++;
        if (j % 2 != 0)
            continue;
        printf("%d\n", j);
    }

    for (int k = 1; k <= count; k++) {
        if (k % 2 == 0)
            printf("%d\n", k);
    }

    return 0;
}
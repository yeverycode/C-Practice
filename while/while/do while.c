#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    /*
    int i = 0;
    do {
        printf("Hello,world %d!\n", i); // i �Բ� ���
        i++;
    } while (i < 100);

    //do �� �ش��ϴ� �κ�
    printf("Hello, world! %d\n", i); //ó�� �� ���� ����
    i++;
    while (i < 100) {
        printf("Hello, world!\n");
        i++;
    }

    // �ʱⰪ 1���� ����
    int j = 1;
    do {
        printf("Hello, world!\n");
        j++;
    } while (j <= 100);

    // �ʱⰪ ����
    int k = 100;
    do {
        printf("Hello, world! %d\n", k);
        k--;
    } while (k > 0); */

    int i;
    scanf("%d", &i);

    int j = 0;
    do {
        printf("Hello, world! %d\n", j);
        j++;
    } while (j < i);

    do {
        printf("Hello, world! %d\n", i);
        i--;
    } while (i > 0);

    srand(time(NULL));
    int k = 0;
    do {
        k = rand() % 10; // rand �Լ��� ����Ͽ� �������� ������ �����ϰ� 10 �̸��� ���ڷ� �����.

        printf("%d\n", k);
    } while (k != 3);

    // ���ѷ���
    /* do {
        printf("Hello, world!");
    } while (1); */

    // �� ���� ����
    do {
        printf("Hello, world!");
    } while (0);

    return 0;
}
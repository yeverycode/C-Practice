#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 100; i++) {
        printf("Hello world!\n");
    }
    printf("%d\n", i);

    // �ʱⰪ�� ���ҽ�Ű�� ���
    for (int j = 100; j > 0; j--) {
        printf("Hello world! %d\n", j);
    }
    
    int count;
    scanf("%d", &count);
    for (int k = 0; k < count; k++) {
        printf("Hello, world!\n");
    }

    // �ʱⰪ�� ���ҽ�Ű�� ���
    for (int l = count; l > 0; l--) {
        printf("Hello, world!\n");
    }

    for (; count > 0; count--) {
        printf("Hello,world! %d\n", count); // �ʱⰪ ���� scanf���� ������ ���ҽ��� �ݺ�
    }

    // ���� �ΰ� ����ϱ�
    for (int a = 0, b = 0; a < 10; a++, b += 2) {
        printf("a: %d, b: %d\n", a, b);
    }

    // for �� ���ѷ���
    for (;;) {
        printf("Hello, world!\n");
    } // �ʱ갪, ���ǽ�, ��ȭ���� ��� �����ϸ� ���ѷ�����.
    return 0;
}
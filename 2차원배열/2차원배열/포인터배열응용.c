#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char c1 = 'a';
    char *s1 = "Hello";  // "Hello"�� ���ڿ�, ���ڿ��� "" �� �ѷ��� // �ּҸ� ����

    printf("%c\n", c1);
    printf("%s\n", s1); // ���� ����
    printf("%p\n", s1); // �ּ�

    printf("%c\n", s1[1]); // �ε��� 1�� ���� ���
    printf("%c\n", s1[4]);
    printf("%c\n", s1[5]); // NULL �� ȭ�鿡 ǥ�õ��� ����

    // �迭 ���� ���ڿ�
    char s2[10] = "Hello"; // ũ�Ⱑ 10�� char �� �迭�� �����ϰ� ���ڿ� �Ҵ�
    printf("%s\n", s2); // Hello: %s�� ���ڿ� ���

    char c3[] = "Hello";
    printf("%s\n", c3);

    c3[1] = 'A';
    printf("%s\n", c3);
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    //���ڿ� ����� ���ڿ��� ����� ù��° �ּҴ�. ���ڿ� = �ּ�
    const char* p = "Hello"; // ���ڿ� literal ���
    const char* ptr = "pear"; 

    // ���ڿ� ����� char �� �迭�� ���� �� "�ּҺ��� �ι��ڱ��� �迭�� ����"
    char str[6] = "apple";

    char* a = malloc(sizeof(char));

    printf("%p\n", p); // �ּ� ���
    printf("%s\n", p); // �ּҺ��� null ���� �������� ���
    printf("%s\n", p+2); // l���� null ���� �������� ���

    printf("%s\n", str); // �迭�� �̸��� �迭�� ù��° ������ �ּҴ�.
    printf("%s\n", &str[0]); // �迭�� �̸��� �迭�� ù��° ������ �ּҴ�.

    printf("%c\n", p[0]);
    printf("%c\n", *(p + 1));
    printf("%c\n", p[4]);

    printf("%c\n", ptr[0]);

    free(a);
    return 0;
}
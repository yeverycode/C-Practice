#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

    /*char s1[30] = "The Little Prince";

    char* ptr = strtok(s1, " "); // ���� �������� ���ڿ� �ڸ�

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " "); // ���� ���ڿ��� �߶� �����͸� ��ȯ. ' ' �� ������ �� �ȴ�.
    }
    */
    char s1[30] ;    // char 30�� ũ�⸸ŭ ���� �޸� �Ҵ�

    strcpy(s1, "The Little Prince");    // s1�� ���ڿ� ����

    char* ptr = strtok(s1, " ");    // ���� �޸𸮿� ����ִ� ���ڿ��� �ڸ� �� ����

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }
}
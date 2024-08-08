#define _CRT_SECURE_NO_WARNINGS // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ����� ��� ����
#include <string.h> //strcpy �Լ��� ����� ��� ����

char* helloLiteral() // char �����͸� ��ȯ�ϴ� �Լ� ����
{
    char* s1 = "Hello, world!";
    return s1; // ���ڿ� Hello, world!�� �޸𸮿� ����Ǿ� �����Ƿ� ������� ����
                  // ���ڿ� ������ ����
}

char* helloDynamicMeMory() //char �����͸� ��ȯ�ϴ� helloDynamicMemory �Լ� ����
{
    char* s1 = malloc(sizeof(char) * 20); // char 20�� ��ŭ ���� �޸� �Ҵ�
    
    strcpy(s1, "Hello, world!"); //Hello, world! �� s1�� ����

    return s1; // ���ڿ� return
}

int main() {
    char* s1;
    char* s2;

    s1 = helloLiteral();
    s2 = helloDynamicMemory();

    printf("%s\n", s1);    // Hello, world!
    printf("%s\n", s2);    // Hello, world!

    free(s2);    // ���� �޸� ����

    return 0;

}
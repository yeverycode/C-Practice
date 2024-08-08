#define _CRT_SECURE_NO_WARNINGS // strcpy ���Ȱ��� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* allocMemory() //void �����͸� ��ȯ�ϴ� �Լ� ����
{
    void* ptr = malloc(100); // 100 ����Ʈ ��ŭ ���� �޸� �Ҵ�

    return ptr; //void ������ ��ȯ
}

int main() {
    char* s1 = allocMemory(); //void �����͸� char �����Ϳ� �־ ���ڿ�ó�� ���
    strcpy(s1, "Hello, world!"); 
    printf("%s\n", s1); 
    free(s1);

    int* numPtr1 = allocMemory();   // void �����͸� int �����Ϳ� �־ ���� �迭ó�� ���
    numPtr1[0] = 10;                // ù ��° ��ҿ� 10 ����
    numPtr1[1] = 20;                // �� ��° ��ҿ� 20 ����
    printf("%d %d\n", numPtr1[0], numPtr1[1]); // 10 20
    free(numPtr1);                  // ���� �޸� ����

    return 0;
}
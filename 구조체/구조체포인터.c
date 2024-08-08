#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

struct Person {    // ����ü ����
    char name[20];        // ����ü ��� 1
    int age;              // ����ü ��� 2
    char address[100];    // ����ü ��� 3
};

int main()
{
    struct Person* p1 = malloc(sizeof(struct Person));    // ����ü ������ ����(8byte), �޸� �Ҵ�
    // �����ʹ� ������ 8 byte
    // ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� �Ҵ�
    strcpy(p1->name, "ȫ�浿");
    p1->age = 30;
    strcpy(p1->address, "����� ��걸 �ѳ���");

    // ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� ���
    printf("�̸�: %s\n", p1->name);       // ȫ�浿
    printf("����: %d\n", p1->age);        // 30
    printf("�ּ�: %s\n", p1->address);    // ����� ��걸 �ѳ���

    free(p1);    // ���� �޸� ����

    return 0;
}
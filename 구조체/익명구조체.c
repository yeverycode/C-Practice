#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

typedef struct {
    char name[20]; // ����ü ��� 1
    int age; // ����ü ��� 2
    char address[100]; // ����ü ��� 3
} Person;

int main() {
    Person p1; // ����ü ��Ī Person���� ���� ����

    // ������ ����ü ����� �����Ͽ� ���� �Ҵ�
    strcpy(p1.name, "ȫ�浿");
    p1.age = 30;
    strcpy(p1.address, "����� ��걸 �ѳ���");

    printf("�̸�: %s\n", p1.name);
    printf("����: %d\n", p1.age);
    printf("�ּ�: %s\n", p1.address); // �ּ� : ����� ��걸 �ѳ���

    return 0;
}
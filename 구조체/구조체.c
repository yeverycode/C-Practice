#define _CRT_SECURE_NO_WARNINGS //strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h> // strcpy �Լ��� ����� ��� ����

// ����ü ���� : �ڷ��� (Ÿ��) ����
/*struct Person {
    char name[20]; // ����ü ��� 1
    int age; // ����ü ��� 2
    char address[100]; //����ü ��� 3
};

int main() {

    struct Person p1; // ����ü ���� ����

    //������ ����ü ����� �����Ͽ� �� �Ҵ�
    strcpy(p1.name, "ȫ�浿"); 
    p1.age = 30;
    strcpy(p1.address, "����� ��걸 �ѳ���");

    // ������ ����ü ����� �����Ͽ� �� ���
    printf("�̸�: %s\n", p1.name); // �̸� : ȫ�浿
    printf("����: %d\n", p1.age); // ���� : 30
    printf("�ּ�: %s\n", p1.address); // �ּ� : ����� ��걸 �ѳ���

    return 0;
}*/

typedef struct _Person{
    char name[20];
int age;
char address[100];
}Person;

int main() {
    Person p1; // ����ü ��Ī Person ���� ���� ����

    strcpy(p1.name, "ȫ�浿");
    p1.age = 30;
    strcpy(p1.address, "����� ��걸 �ѳ���");

    // ������ ����ü ����� �����Ͽ� �� ���
    printf("�̸�: %s\n", p1.name);       // �̸�: ȫ�浿
    printf("����: %d\n", p1.age);        // ����: 30
    printf("�ּ�: %s\n", p1.address);    // �ּ�: ����� ��걸 �ѳ���

    return 0;
}

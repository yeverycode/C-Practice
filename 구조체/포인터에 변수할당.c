#include <stdio.h>

struct Person {
    char name[20]; 
    int age;
    char address[100]; // ����ü ���3
};

int main() {
    struct Person p1;
    struct Person* ptr;

    ptr = &p1; // p1�� �޸� �ּҸ� ���ؼ� ptr �� �Ҵ�

    // ȭ��ǥ ������ ����
    ptr->age = 30;

    printf("���� : %d\n", p1.age);
    printf("���� %d\n", ptr->age);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*struct Student {
    char name[20];
    int grade;
    int class;
    float average;
};

int main() {
    struct Student *s1= malloc(sizeof(struct Student));

    s1->grade=1;
    s1->class = 3;
    strcpy(s1->name, "��浿");
    s1->average = 65.389999;

    printf("�̸�: %s\n", s1->name);
    printf("�г�: %d\n", s1->grade);
    printf("��: %d\n", s1->class);
    printf("�������: %f\n", s1->average);

    free(s1);

    return 0;
}

typedef struct _Point3D {
    float x;
    float y;
    float z;
} Point3D;

int main()
{
    Point3D* p1 = malloc(sizeof(Point3D));

    p1->x = 10.0f;
    p1->y = 20.0f;
    p1->z= 30.0f;
    
    printf("%f %f %f\n", p1->x, p1->y, p1->z);

    free(p1);

    return 0;
}

struct Item {
    char name[100];
    int price;
    bool limited;
};

int main()
{
    struct Item item1 = { "������ ���ϸ�� ���亥 ����� ����", 100000, false };
    struct Item* ptr = &item1;

    ptr->limited = true;

    if (ptr->limited == true)
        printf("������\n");
    else
        printf("�Ϲ���\n");

    return 0;
}

struct Person {
    char name[20];
    int age;
    char address[100];
};

typedef struct {
    char name[20];
    int number;
    int displacement;
} Car;

int main()
{
    struct Person* p1 = malloc(sizeof(struct Person));
    Car* c1 = malloc(sizeof(Car));

    strcpy(p1->name, "��浿");
    p1->age = 40;
    strcpy(p1->address, "����� ���ʱ� ������");

    strcpy(c1->name, "���ڶ�");
    c1->number = 3421;
    c1->displacement = 2000;

    printf("�̸�: %s\n", p1->name);
    printf("����: %d\n", p1->age);
    printf("�ּ�: %s\n", p1->address);

    printf("�ڵ��� �̸�: %s\n", c1->name);
    printf("�ڵ��� ��ȣ: %d\n", c1->number);
    printf("��ⷮ: %dcc\n", c1->displacement);

    free(p1);
    free(c1);

    return 0;
}*/

struct Point3D {
    float x;
    float y;
    float z;
};

int main()
{
    struct Point3D p1 = { 10.0f, 20.0f, 30.0f };
    struct Point3D* ptr;

    ptr = &p1;

    printf("%f %f %f\n", ptr->x, ptr->y, ptr->z);

    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

#include <string.h>
struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p;
    struct Point2D* ptr = malloc(sizeof(struct Point2D));

    memset(&p,0,sizeof(struct Point2D));
    memset(ptr,0,sizeof(struct Point2D));

    printf("%d %d %d %d\n", p.x, p.y, ptr->x, ptr->y);

    free(ptr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;
    struct Point2D* p2 = malloc(sizeof(struct Point2D));

    p1.x = 10;
    p1.y = 20;

    memcpy(p2,&p1,sizeof(struct Point2D));

    printf("%d %d\n", p2->x, p2->y);

    free(p2);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person p1;

    strcpy(p1.name, "ȫ�浿");
    p1.age = 30;
    strcpy(p1.address, "����� ��걸 �ѳ���");

    memset(&p1,0,sizeof(struct Person));

    printf("�̸�: %s\n", p1.name);
    printf("����: %d\n", p1.age);
    printf("�ּ�: %s\n", p1.address);

    return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person* p1 = malloc(sizeof(struct Person));
    struct Person p2;

    strcpy(p1->name, "��浿");
    p1->age = 40;
    strcpy(p1->address, "����� ���ʱ� ������");

    memcpy(&p2,p1,sizeof(struct Person));

    printf("�̸�: %s\n", p2.name);
    printf("����: %d\n", p2.age);
    printf("�ּ�: %s\n", p2.address);

    free(p1);

    return 0;

}
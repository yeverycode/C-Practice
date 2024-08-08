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
    strcpy(s1->name, "고길동");
    s1->average = 65.389999;

    printf("이름: %s\n", s1->name);
    printf("학년: %d\n", s1->grade);
    printf("반: %d\n", s1->class);
    printf("평균점수: %f\n", s1->average);

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
    struct Item item1 = { "베를린 필하모닉 베토벤 교향곡 전집", 100000, false };
    struct Item* ptr = &item1;

    ptr->limited = true;

    if (ptr->limited == true)
        printf("한정판\n");
    else
        printf("일반판\n");

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

    strcpy(p1->name, "고길동");
    p1->age = 40;
    strcpy(p1->address, "서울시 서초구 반포동");

    strcpy(c1->name, "스텔라");
    c1->number = 3421;
    c1->displacement = 2000;

    printf("이름: %s\n", p1->name);
    printf("나이: %d\n", p1->age);
    printf("주소: %s\n", p1->address);

    printf("자동차 이름: %s\n", c1->name);
    printf("자동차 번호: %d\n", c1->number);
    printf("배기량: %dcc\n", c1->displacement);

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
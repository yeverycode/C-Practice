#include <stdio.h>

struct Person {
    char name[20]; 
    int age;
    char address[100]; // 구조체 멤버3
};

int main() {
    struct Person p1;
    struct Person* ptr;

    ptr = &p1; // p1의 메모리 주소를 구해서 ptr 에 할당

    // 화살표 연산자 접근
    ptr->age = 30;

    printf("나이 : %d\n", p1.age);
    printf("나이 %d\n", ptr->age);

    return 0;
}
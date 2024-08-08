/*
#include <stdio.h>

void hello()  // 반환값과 매개변수가 없음
{
    printf("Hello, world!\n");
}

void bonjour()    // 반환값과 매개변수가 없음
{
    printf("bonjour le monde!\n");
}

int main()
{
    void (*fp)(); // 반환값과 매개변수가 없는 함수 포인터 fp 선언

    fp = hello; // hello 함수의 메모리 주소를 함수 포인터 fp에 저장

    fp(); // Hello, world!: 함수 포인터로 hello 함수 호출

    fp = bonjour; // bonjour 함수의 메모리 주소를 함수 포인터 fp에 저장

    fp(); // bonjour le monde! : 함수 포인터로 bonjour 함수 호출

    return 0;
}
*/

#include <stdio.h>

// 덧셈 함수
int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

// 곱셈 함수
int mul(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a * b;
}


int main()
{
    int (*fp)(int, int); // int형 반환값, int형 매개변수 두개가 있는 함수 포인터 fp ㅓㄴ언

    fp = add; //add 함수의 메모리 주소를 함수 포인터 fp에 저장
    printf("%d\n", fp(10, 20));

    fp = mul; //mul 함수의 메모리 주소를 함수 포인터 fp에 저장
    printf("%d\n", fp(10, 20));

    return 0;
}
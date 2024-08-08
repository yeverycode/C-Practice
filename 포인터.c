#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main() {
    int a = 5;
    double d = 3.54;

    // 주소를 저장하는 변수 선언 => 포인터
    int* ap = &a; // 포인터 8 byte 공간 할당 된다.
    // ap 는 a 를 '참조', '포인터' 한다.

    double* dp = &d; 

    printf("%p\n", ap); // a의 주소값. 
    printf("%d\n", *ap); // a 의 값. ap 가 가리키는 메모리에 접근
    return 0;
}

int main() {
    int* p;
    int i = 3, j;

    p = &i; // i 의 주소를 p 에 저장해라
    j = *p; // p 역참조, i 의 값이 들어간다. 3.
    j++; // j=4
    printf("1. %d\n", *p); // 3
    printf("2, %p\n", p); // i의 주소
    printf("3. %d\n", j); // 4

    p = &j; // j 의 주소. 포인터는 변수다.
    printf("4. %d\n", *p); // 4
    printf("5. %p\n", p); //j 의 주소

    *p = *p + 3; // p 역참조 값에 3을 더해서 p 역참조 값을 변경
    // *p= 4+3=7
    printf("6. %d\n", i); //3
    printf("7. %d\n", j); // 7이 된다.
    printf("8. %d\n\n", *p); //7

    return 0;
} 

// 소문자를 전달하면 대문자로 변환하고, 소문자가 아니라면 변환하지 않는 함수
// 포인터 선언한다.
void toUpper(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c -= 32;
    }
}

int main() {
    char ch;
    printf("영문자입력 :");
    ch = getchar();
    toUpper(&ch); // 주소값의 변경을 바란다.
    printf("결과는 %c입니다.\n", ch);
    return 0;
} */

// 정수와 실수에 10을 더하는 함수
void plusTen(int* a, double* b) {
    *a += 10;
    *b += 10.0;
}

int main() {
    int n;
    double d;

    // 사용자로부터 정수 입력 받기
    printf("정수 입력: ");
    scanf("%d", &n);

    // 사용자로부터 실수 입력 받기
    printf("실수 입력: ");
    scanf("%lf", &d);

    // plusTen 함수 호출: n과 d에 10을 더하는 함수
    plusTen(&n, &d);

    // 수정된 값 출력
    printf("%d %lf\n", n, d);

    return 0;
}
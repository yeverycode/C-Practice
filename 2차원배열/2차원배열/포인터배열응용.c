#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char c1 = 'a';
    char *s1 = "Hello";  // "Hello"는 문자열, 문자열은 "" 로 둘러쌈 // 주소를 저장

    printf("%c\n", c1);
    printf("%s\n", s1); // 실행 에러
    printf("%p\n", s1); // 주소

    printf("%c\n", s1[1]); // 인덱스 1의 문자 출력
    printf("%c\n", s1[4]);
    printf("%c\n", s1[5]); // NULL 은 화면에 표시되지 않음

    // 배열 형태 문자열
    char s2[10] = "Hello"; // 크기가 10인 char 형 배열을 선언하고 문자열 할당
    printf("%s\n", s2); // Hello: %s로 문자열 출력

    char c3[] = "Hello";
    printf("%s\n", c3);

    c3[1] = 'A';
    printf("%s\n", c3);
    return 0;
}
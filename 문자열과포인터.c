#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    //문자열 상수는 문자열이 저장된 첫번째 주소다. 문자열 = 주소
    const char* p = "Hello"; // 문자열 literal 상수
    const char* ptr = "pear"; 

    // 문자열 상수가 char 형 배열에 대입 시 "주소부터 널문자까지 배열에 복사"
    char str[6] = "apple";

    char* a = malloc(sizeof(char));

    printf("%p\n", p); // 주소 출력
    printf("%s\n", p); // 주소부터 null 문자 이전까지 출력
    printf("%s\n", p+2); // l부터 null 문자 이전까지 출력

    printf("%s\n", str); // 배열의 이름이 배열의 첫번째 원소의 주소다.
    printf("%s\n", &str[0]); // 배열의 이름이 배열의 첫번째 원소의 주소다.

    printf("%c\n", p[0]);
    printf("%c\n", *(p + 1));
    printf("%c\n", p[4]);

    printf("%c\n", ptr[0]);

    free(a);
    return 0;
}
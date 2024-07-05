#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

    /*char s1[30] = "The Little Prince";

    char* ptr = strtok(s1, " "); // 공백 기준으로 문자열 자름

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " "); // 다음 문자열을 잘라서 포인터를 반환. ' ' 로 묶으면 안 된다.
    }
    */
    char s1[30] ;    // char 30개 크기만큼 동적 메모리 할당

    strcpy(s1, "The Little Prince");    // s1에 문자열 복사

    char* ptr = strtok(s1, " ");    // 동적 메모리에 들어있는 문자열은 자를 수 있음

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }
}
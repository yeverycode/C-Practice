#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char* s1 = "world"; // 문자열 포인터
    char* s2 = malloc(sizeof(char) * 20); //char 20개 크기만큼 동적 메모리 할당

    strcpy(s2, "Hello"); // s2에 Hello 문자열 복사
    strcat(s2, s1); //s2 뒤에 s1을 붙인다.
    printf("%s\n", s2);
    free(s2);
    return 0;
}
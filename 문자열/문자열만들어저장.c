#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> // sprintf 함수가 선언된 헤더 파일
#include <stdlib.h>
int main() {

    char s1[20]; // 크기가 20인 char 형 배열 선언
    // sprintf(배열, 서식, 값)
    sprintf(s1, "Hello, %s", "world!");

    printf("%s\n", s1); // Hello, world! 문자열 출력

    char s2[30]; // 크기가 30인 char 형 배열을 선언
    sprintf(s2, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);

    printf("%s\n", s2);

    char* s3 = malloc(sizeof(char) * 30);
    sprintf(s3, "Hello, %s", "world!");
    printf("%s\n", s3);

    free(s3);
    return 0;
}
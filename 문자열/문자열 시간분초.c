#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main() {
    /*char s1[30] = "2015-06-10T15:32:19";

    char* ptr = strtok(s1, "-T:"); 

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, "-T:"); // 다음 문자열을 잘라서 포인터를 반환
    } */

    char s1[30] = "The Little Prince"; // 크기가 30인 char 형 배열 선언
    char* sArr[10] = {NULL,}; // 초기화
    int i = 0;

    char* ptr = strtok(s1, " "); // 공백 기준으로 자름
    while (ptr != NULL) {
        sArr[i] = ptr;
        i++;
        ptr = strtok(NULL, " ");
    }

    for (i = 0; i < 10; i++) {
        if (sArr[i] != NULL)
            printf("%s\n", sArr[i]);
    }

    return 0;
}
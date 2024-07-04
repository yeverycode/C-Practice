#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen 함수가 선언된 헤더 파일
int main() {
    /*char* s1 = "Hello";
    char s2[10] = "Hello";

    printf("%d\n", strlen(s1));
    printf("%d\n", strlen(s2));

    // strcmp 함수 사용하여 문자열 비교

    int ret = strcmp(s1, s2); // 문자열이 같은지 비교
    printf("%d\n", ret); // 0: 두 문자열 같으면 0 반환

    printf("%d\n", strcmp("aaa", "aaa"));    //  0: aaa와 aaa는 같으므로 0
    printf("%d\n", strcmp("aab", "aaa"));    //  1: aab와 aaa 중에서 aab가 크므로 1
    printf("%d\n", strcmp("aab", "aac"));    // -1: aab와 aac 중에서 aac가 크므로 -1
    */
    char s1[20];
    char s2[20];

    printf("문자열 두 개를 입력하세요: ");
    scanf("%s %s", s1, s2);

    int ret = strcmp(s1, s2); // 입력된 문자열 비교

    switch (ret)
    {
    case 0:
        printf("두 문자열이 같음\n");
        break;
    case 1:
        printf("%s보다 %s가 큼\n", s2, s1);
        break;
    case -1:
        printf("%s보다 %s가 큼\n", s1, s2);
        break;
    }
    return 0;
}
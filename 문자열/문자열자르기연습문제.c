#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    /*char s1[40] = "Alice's Adventures in Wonderland";

    char* ptr = strtok(s1, " ");

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }
    return 0;

    char s1[61] = { NULL, }; // 배열 선언 후 초기화
    scanf("%s", s1);

    char* ptr = strtok(s1, ".");

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, ".");
    }

    return 0;*/

    // 1001 크기의 문자 배열 s1을 선언하고 모두 0으로 초기화
    char s1[1001] = { 0 };
    // 공백을 포함한 문자열을 입력받아 s1에 저장
    scanf("%[^\n]s", s1);

    // 문자열을 특정 구분자로 분리하여 첫 번째 토큰을 ptr에 저장
    char* ptr = strtok(s1, " -',.");
    int count = 0;  // "the"의 개수를 셀 변수 count를 0으로 초기화

    // ptr이 NULL이 아닐 동안 반복
    while (ptr != NULL) {
        // 현재 토큰이 "the"와 같은지 비교
        if (strcmp(ptr, "the") == 0) {
            count++;  // 같으면 count를 1 증가
        }
        // 다음 토큰을 가져옴
        ptr = strtok(NULL, " -',.");
    }

    // "the"의 개수를 출력
    printf("%d\n", count);
    return 0;  // 프로그램 종료
}
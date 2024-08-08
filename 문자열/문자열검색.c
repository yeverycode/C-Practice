#include <stdio.h>
#include <string.h>
int main() {

    /*char s1[30] = "A Garden Diary"; // 크기가 30인 char 형 배열을 선언

    char* ptr = strchr(s1, 'a');

    while (ptr != NULL) {
        // 검색된 문자열이 없을때까지 반복
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'a'); // 포인터에 1을 더하여 a 다음부터 검색
    }

    char* (ptr2) = strrchr(s1, 'a');
    printf("%s\n", ptr2); */

    char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

    char* ptr = strstr(s1, "den");     // den으로 시작하는 문자열 검색, 포인터 반환

    while (ptr != NULL)                // 검색된 문자열이 없을 때까지 반복
    {
        printf("%s\n", ptr);           // 검색된 문자열 출력
        ptr = strstr(ptr + 1, "den");  // den 포인터에 1을 더하여 e부터 검색
    }
    return 0;
}
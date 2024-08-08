#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    /*char word[30];
    int length; // 문자열 길이
    bool isPalindrome = true; // 회문 판별 변수, 초기 true

    printf("단어를 입력하세요: ");
    scanf("%s", word);

    length = strlen(word); // 문자열의 길이

    // 0부터 문자열 길이 절반까지 반복
    for (int i = 0; i < length / 2; i++) {

        if (word[i] != word[length - 1 - 1])
        {
            isPalindrome = false;
            break;
        }
    }
    printf("%d\n", isPalindrome); // 회문 판별값 출력

    // 2글자씩 출력
    char text[30] = "Hello";
    int length2;

    length2 = strlen(text);

    for (int i = 0; i < length2-1; i++) {
        printf("%c%c\n", text[i], text[i + 1]);
    }*/

    char text[100] = "this is C language";
    char* tokens[30] = { NULL, }; // 자른 문자열의 포인터를 보관할 배열, NULL 로 초기화
    int count = 0;
    char* ptr = strtok(text, " "); // 공백을 기준으로 문자열 자름

    while (ptr != NULL) {
        tokens[count] = ptr; // 문자열 자른 뒤에 메모리 주소 문자열 포인터 배열에 저장
        count++;

        ptr = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%s %s\n", tokens[i], tokens[i+1]);
    }
    return 0;
}
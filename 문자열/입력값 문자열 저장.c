#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

    /*char s1[10]; // 크기가 10인 char형 배열 선언
    printf("문자열을 입력하세요: ");
    scanf("%s", s1); 

    printf("%s\n", s1); */

    // 공백 포함하여 저장
    // scanf 함수에서 %[^\n]s 로 지정

    /*char s2[30];
    printf("문자열을 입력하세요: ");
    scanf("%[^\n]s", &s2);

    printf("%s\n", s2);*/

    /*char* s3 = malloc(sizeof(char) * 10); // char 10개 크기만큼 동적메모리 할당
    printf("문자열을 입력하세요 : ");
    scanf("%s", s3);

    printf("%s\n", s3); //문자열 내용 출력
    free(s3); //동적 메모리 해제 */

    char s1[10];
    char s2[10];
    printf("문자열을 두개 입력하세요: ");
    scanf("%s %s", s1, s2); // 공백으로 구분된 문자열 두개 입력받음

    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}
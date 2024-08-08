#define _CRT_SECURE_NO_WARNINGS // strcpy 보안경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* allocMemory() //void 포인터를 반환하는 함수 정의
{
    void* ptr = malloc(100); // 100 바이트 만큼 동적 메모리 할당

    return ptr; //void 포인터 반환
}

int main() {
    char* s1 = allocMemory(); //void 포인터를 char 포인터에 넣어서 문자열처럼 사용
    strcpy(s1, "Hello, world!"); 
    printf("%s\n", s1); 
    free(s1);

    int* numPtr1 = allocMemory();   // void 포인터를 int 포인터에 넣어서 정수 배열처럼 사용
    numPtr1[0] = 10;                // 첫 번째 요소에 10 저장
    numPtr1[1] = 20;                // 두 번째 요소에 20 저장
    printf("%d %d\n", numPtr1[0], numPtr1[1]); // 10 20
    free(numPtr1);                  // 동적 메모리 해제

    return 0;
}
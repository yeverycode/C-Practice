#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

union Box {//공용체 정의
    short candy; // 2바이트
    float snack; // 4바이트
    char doll[8];
};

int main() {
    union Box b1; //공용체 변수 선언

    printf("%d\n", sizeof(b1)); // 공용체 전체 크기는 가장 큰 자료형 크기

    strcpy(b1.doll, "bear");

    printf("%d\n", b1.candy);
    printf("%f\n", b1.snack);
    printf("%s\n", b1.doll);

    printf("%d\n", sizeof(b1));  // 8: 공용체의 전체 크기는 가장 큰 자료형의 크기
}
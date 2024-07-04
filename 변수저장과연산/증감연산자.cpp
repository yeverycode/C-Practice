#include <stdio.h>

int main() {
    int num1 = 1;
    num1++; // 정수형 변수의 값 1 증가
    printf("%d\n", num1);

    num1--;
    printf("%d\n", num1);

    // 실수 자료형

    float num2 = 2.1f;
    float num3 = 2.1f;

    num2++; // 실수형 변수 1 증가
    num3--; // 실수형 변수 1 감소

    printf("%f %f\n", num2, num3);

    // 문자 자료형
    
    char c1 = 'b';
    char c2 = 'b';
    c1++; // 문자 자료형 변수의 값을 1 증가시킴, 'c'로 바뀜
    c2--;  // 문자 자료형 변수의 값을 1 감소시킴, 'a'로 바뀜

    printf("%c %c\n", c1, c2);

    int num9 = 12;
    int num10;
    num10 = num9++; // num2에 현재 num1 값을 할당, num2는 12가 됨
    printf("%d", num10);
    return 0;
}
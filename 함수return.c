#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y);
int power(int x);

int sum(int x, int y) // 매개변수 (parameter)
{
    int sum = x + y; // 지역변수
    //printf("%d\n", sum);
    return sum; // return 출력값 : 오직 한 개만 가능 (여러개 출력 불가)
}

int power(int x)
{
    int result = x * x; // 연산 결과를 return , 함수 원형 바꿔줘야 함(결과 자료형과 동일하게)
    return result;
}

int main() {
    double re;
    re = sum(2345, 87) * 1234 / 2.8;
    printf("%f\n", re);
    int result;
    result = power(2);
    printf("%d\n", result);

    return 0;
}

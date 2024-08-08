#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*
    // 배열의 크기와 초기화 개수가 같은 경우에는 배열의 크기 생략 가능
    int a[5] = { 1,2,3,4,5 };
    int a[] = { 1,2,3,4,5 }; // 생략 가능

    char digits[10] = "dkssudgk";
    // 9 글자 까지만 저장이 가능. 

    // 숫자 형태의 문자열
    char digits[] = "4912";
    int num1 = atoi(digits);
    int sum1=0;
    int sum2 = 0;

    int len = strlen(digits);
    int k;
    for (int i = 0; i < len; i++) {
        k = num1 % 10;

        if (k % 2 == 0) {
            sum2 += k;
        }
        else
            sum1 += k;

        num1 = num1 / 10;
    }

    printf("%d\n", sum1);
    printf("%d\n", sum2);

    // 숫자 형태 문자열 아스키코드로 변환하는 방법 */
    char digits[] = "4912";
    int evenSum = 0, oddSum = 0;
    int i, digit;

    for (i = 0; digits[i] != '\0'; i++) {
        digit = digits[i] - 48; // 수 형태 문자를 수로 변환
    }
    return 0;
}
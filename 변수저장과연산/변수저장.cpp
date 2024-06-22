#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
int main() {
    /*
    int num1, num2;

    printf("정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2); // 표준 입력을 받아서 변수에 저장

    printf("%d %d\n", num1, num2); // 변수 내용 출력


    float num3;
    printf("실수를 입력하세요: ");
    scanf("%f", &num3); // 실수를 입력받아서 변수에 저장
    printf("%f\n", num3);

    double num4;
    printf("실수를 입력하세요: ");
    scanf("%lf", &num4);
    printf("%lf", num4); */

    char c1;
    printf("문자를 입력하세요: ");
    scanf("%c", &c1);
    printf("%c\n", c1); // 변수 내용 출력

    // getchar 이용 방법
    char c2 = getchar(); // 문자 하나 입력받음
    printf("%c", c2);
    return 0;

    char c3 = 'a';
    putchar(c3);

}
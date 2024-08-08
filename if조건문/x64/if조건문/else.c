#include <stdio.h>
int main() {
    int num1 = 30;

    if (num1 == 10)
        printf("10입니다.\n");
    else if (num1 == 20) //else if에 조건식을 지정하지 않으면 컴파일 에러 발생
        printf("20입니다.\n");
    else
        printf("10도 20도 아닙니다.\n");

    return 0;
}
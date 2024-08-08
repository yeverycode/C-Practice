#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 2의 배수이면 fizz, 7의 배수이면 buzz 출력

    /*for (int i = 0; i < 100; i++) {
        if ((i % 2 == 0) && (i % 7 == 0)) {
            printf("FizzBuzz\n");
        }
        else if (i % 2 == 0) {
            printf("Fizz\n");
        }

        else if (i % 7 == 0) {
            printf("Buzz\n");
        }

        else
            printf("%d\n",i);
    } */
    
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++) {
        if ((i % 5 == 0) && (i % 11==0)) {
            printf("FizzBuzz\n");
        }
        else if (i % 5 == 0)
            printf("Fizz\n");
        else if (i % 11 == 0)
            printf("Buzz\n");

        else
            printf("%d\n", i);
    }

    int num3 = 9;
    for (int j = 1; j <= num3; j++) {
        if (num3 % j == 0)
            printf("%d는 num3 의 약수다.\n", j);
    }

    return 0;
}
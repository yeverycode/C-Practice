#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    /*int i = 1;
    for (;;) {
        i++;

        if (i > 103)
            break;

        if (i % 10 == 3)
            i = i;
        else
            continue;
        
        printf("%d\n", i); 
    } */

    // 정답 코드
    /*int i = 1;
    for (;;) {

        if (i % 10 != 3){
            i++;
            continue;
            }

        if (i>103)
        break;

        printf("%d\n", i);
    } */

    // 심사 문제

    unsigned int num1, num2;
    scanf("%u %u", &num1, &num2);

    int i = num1;
    /*while (1) {
        if (i % 10 != 7)
            printf("%d ", i);

        i++;

        if ((i<num1) || (i>num2))
            break;
    } */

    while (1) {
        if (i % 10 == 7) {
            i++;
            continue;
        }

        if ((i < num1) || (i > num2))
            break;

        printf("%d ", i);
        i++;
    }
    return 0;
}
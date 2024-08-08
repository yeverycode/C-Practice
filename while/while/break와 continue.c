#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    /*int num1 = 0;

    while (1) {
        num1++; // num을 1씩 증가 시킴

        printf("%d\n", num1);

        if (num1 == 100)
            break; // num1이 100일 때 반복문을 끝낸다. while의 제어를 벗어난다.
    }

    for (int i = 1; i <= 100; i++) {

        if (i % 2 != 0) // i를 2로 나누었을 때 나머지가 0이 아니면 홀수다, 아래 코드를 실행하지 않고 건너 뜀.
            continue;

        printf("%d\n", i);
    }

    int j = 1;
    while (j <= 100) {
        j++;

        if (j % 2 != 0)
            continue;

        printf("%d\n", j);
    } */

    int count;
    scanf("%d", &count);

    int i = 1;
    while (1) {
        printf("%d\n", i);
        if (i == count)
            break;

        i++;
    }

    // 입력한 숫자까지 짝수 출력하기
    int j = 1;
    while (j<count) {
        j++;
        if (j % 2 != 0)
            continue;
        printf("%d\n", j);
    }

    for (int k = 1; k <= count; k++) {
        if (k % 2 == 0)
            printf("%d\n", k);
    }

    return 0;
}
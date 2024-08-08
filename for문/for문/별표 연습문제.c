#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 역삼각형 별 출력

    /*for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    } */

    // 산 모양으로 별 출력
    // i=0, 공백 0,1,3,4 j<=1-i || j>=i+3
    // i=1, 공백 0,4 j<=1-i || j>=i+3
    // i=2, 

    int num;
    int i, j;
    scanf("%d", &num);

    /*for (int i = 0; i < num; i++) {
        for (int j = 0; j < (2*num-1) ; j++) {
            if ( (j < num-1-i) || (j > num-1+i) )
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    } */

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
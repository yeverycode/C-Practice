#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    /*int i = 2;
    int j = 0;

    for (int i=2, j=5, count=0; count<=4 ; i*=2, j--, count++) {

        printf("%d %d\n", i,j);
    }

    for (int i = 2, j = 5; i <= 32; i *= 2, j--) {
        printf("%d %d\n", i, j);
    } */
    char c1;
    scanf("%c", &c1);

    for (c1; ('a' <= c1) && (c1 <= 'z'); c1++) {
        printf("%c",c1);
    }
    return 0;
}
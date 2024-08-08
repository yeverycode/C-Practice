#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /*unsigned char i = 1;
    while (i !=0 ) {
        printf("%u\n", i);
        i <<= 1;
    } */

    int charge;
    scanf("%d", &charge);

    while (charge -1200>= 0) {

        charge -= 1200;
        printf("%d\n", charge);
    }

    return 0;
}
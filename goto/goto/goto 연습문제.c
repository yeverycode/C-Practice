#include <stdio.h>

int main() {

    /*int num1 = 1;
    for (int i = 0; i < 10; i++) {

        switch (num1) {
        case 1:
            printf("1ÀÔ´Ï´Ù.\n");
            goto EXIT;

        default:
            break;
        }
    }
EXIT:
    return 0; */

    int num1 = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (num1 == 10)
                goto EXIT2;
            num1++;
        }
    }
EXIT1:
    printf("100\n");
EXIT2:
    printf("200\n");
EXIT3:
    printf("300\n");

    return 0;
}
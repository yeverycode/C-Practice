#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*int num1 = 0;
    scanf("%d", &num1);

    switch (num1) {
    case 1<<1:
        printf("2\n");
        break;
    case 1<<2:
        printf("4\n");
        break;
    case 1<<3:
        printf("8\n");
        break;
    default:
        printf("default\n");
        break;
    } */

    char menu;
    scanf("%c", &menu);
    switch (menu) {
    case 'f':
        printf("환타\n");
        break;
    case 'c':
        printf("콜라\n");
        break;
    case 'p':
        printf("포카리스웨트\n");
        break;
    default:
        printf("판매하지 않는 메뉴\n");
        break;
    }
    return 0;
}
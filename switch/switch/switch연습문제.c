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
        printf("ȯŸ\n");
        break;
    case 'c':
        printf("�ݶ�\n");
        break;
    case 'p':
        printf("��ī������Ʈ\n");
        break;
    default:
        printf("�Ǹ����� �ʴ� �޴�\n");
        break;
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num1;
    scanf("%d", &num1); // ���� �Է¹���

   /* switch (num1) {
    case 1:
    case 2:
        printf("1 �Ǵ� 2�Դϴ�.\n");
        break;
    case 3:
    case 4:
        printf("3 �Ǵ� 4�Դϴ�.\n");
        break;
    default: // �ƹ��͵� �ش����� ���� ��
        printf("defalut.\n");
        break;
    }*/

    switch (num1) {
    case 1:
    {
        int num2 = num1; // case �ȿ��� ������ ����
        printf("%d�Դϴ�.\n", num2);
        break;
    }
    case 2:
        printf("2�Դϴ�.\n");
        break;
    default:
        printf("default.\n");
        break;
    }

    char c1;
    scanf("%c", &c1);
    switch (c1) {
    case 'a':
        printf("a�Դϴ�.\n");
        break;
    case 'b':
        printf("b�Դϴ�.\n");
        break;
    default:
        printf("default.\n");
        break;
    }

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    int num1 = 10;
    int num2 = 0;

    if (num1 && num1)
        printf("��\n");
    else
        printf("����\n");

    if (num1 || num2)
        printf("��\n");
    else
        printf("����\n");

    printf("%s\n", !num2 ? "��" : "����");

    // �ɻ繮��
    int num3, num4;
    scanf("%d %d", &num3, &num4);

    if (num3 && num4)
        printf("��\n");
    else
        printf("����\n");

    if (num3 || num4)
        printf("��\n");
    else
        printf("����\n");

    if (!num3)
        printf("��\n");
    else
        printf("����\n");

    return 0;
}
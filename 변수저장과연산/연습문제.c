#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /*�������� 1
    int num1, num2, num3;
    printf("���� ������ �Է��ϼ���: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d %d %d\n", num1, num2, num3); */

    // �ɻ繮��
    int num1;
    float num2;
    char c1;

    scanf("%d %f %c", &num1, &num2, &c1);
    printf("%d\n", num1);
    printf("%f\n", num2);
    printf("%c\n", c1);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*
    unsigned char num1 = 1;
    unsigned char num2 = 5;

    printf("%u\n", num1 | num2); // 5 ���
    printf("%u\n", num1 ^ num2); // 4 ���
    printf("%u\n", num1 & num2); // 1 ���

    num1 = ~num2;
    printf("%u\n", num1);

    unsigned char num3 = 32;
    num3 = num3 >> 4 << 1;
    printf("%u\n", num3); */

    // �ɻ繮��
    /*unsigned int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 | num2);
    printf("%u\n", num1 & num2);
    printf("%u\n", ~num1); // d�� �ϸ� ������ ����. u�� �ۼ�! */

    unsigned long long num1;
    scanf("%llu", &num1);
    printf("%llu", (num1 << 20 >> 4));
    return 0;
}
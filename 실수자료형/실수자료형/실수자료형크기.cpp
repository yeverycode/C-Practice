#include <stdio.h>
int main() {
    float num1 = 0.0f;
    double num2 = 0.0;
    long double num3 = 0; 0l;

    printf("float: %d, double: %d, long double: %d\n",
        sizeof(num1), // 4: sizeof�� float ������ �ڷ��� ũ�⸦ ����
        sizeof(num2),  // 8: sizeof�� double ������ �ڷ��� ũ�⸦ ����
        sizeof(num3)); // 8: sizeof�� long double ������ �ڷ��� ũ�⸦ ����

    return 0;
}
#include <stdio.h>
int main() {
    float num1 = 3.e5f; // ����ǥ������� 30000�� ǥ��, float �ڿ� f
    double num2 = -1.3827e-2; // ����ǥ������� =0.013827ǥ��, double �ڿ� �ƹ��͵� x
    long double num3 = 5.21e+9l; //5210000000, long double�� ���� �ڿ� l �� ���δ�.

    printf("%f %f %Lf\n", num1, num2, num3); //float�� double�� %f �� ���, long double�� %Lf�� ���
    printf("%e %e %Le\n", num1, num2, num3); // float�� double�� %e �� ���, long double�� %Le�� ���

    return 0;

}
#include <stdio.h>
#include <float.h> // �Ǽ� �ڷ����� ��� �ּڰ�, �ִ��� ���ǵ� ��� ����

int main() {

    float num1 = FLT_MIN; //float�� ��� �ּڰ�
    float num2 = FLT_MAX; //float�� ��� �ִ�
    double num3 = DBL_MIN; //double�� ��� �ּڰ�
    double num4 = DBL_MAX; //double�� ��� �ִ�
    long double num5 = LDBL_MIN; //long double�� ��� �ּڰ�
    long double num6 = LDBL_MAX; // long double�� ��� �ִ�

    printf("%.40f %.2f\n", num1, num2);

    printf("%e %e\n", num3, num4);
    printf("%Le %Le\n", num5, num6); 

    return 0;
}
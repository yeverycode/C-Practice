#include <stdio.h>
int main() {
    float num1 = 0.1f; // ������� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�, float�� ���ڿ� f�� ����

    double num2 = 3867.215820; // ������� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�, double�� ���ڿ� �ƹ��͵� ������ ����

    long double num3 = 9.327513l; // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�, long double�� ���� �ڿ� 1�� ���δ�.

    // float�� double�� %f �� ���, long double�� %lf �� ���
    printf("%f %f %lf\n", num1, num2, num3); 

    return 0;
}
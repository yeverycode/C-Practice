#include <stdio.h>
int main() {

    int num1 = 5;
    if (num1 == 10)
        printf("10�Դϴ�\n");

    else
        printf("10�� �ƴմϴ�.\n");

    /*if ���ǹ��� ���� ��� : 0 �� �ƴϸ� ������ ���̴�. 0.0f , 0 �� �ƴϸ� ��*/
    if (2)
        printf("��\n");
    else
        printf("����\n");

    if (num1 = 10)
        printf("10�Դϴ�.\n"); // num1�� 10�� �Ҵ��Ͽ��� ������ �׻� ���̴�.

    int num2 = 10; 
    int num3 = 20;
    if (num2 == 10 && num3 == 20)
        printf("��\n");
    else
        printf("����\n");

    return 0;
}
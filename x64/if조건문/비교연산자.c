#include <stdio.h>
int main() {
    /*int num1 = 10;

    printf("%d\n", num1 == 10); //1: num1�� 10�� ������
    printf("%d\n", num1 != 5); // 1: num1�� 5�� �ٸ��� 

    printf("%d\n", num1 > 10); // 0:num1�� 10���� ū��
    printf("%d\n", num1 < 10); // 0: num1�� 10���� ������

    printf("%d\n", num1 >= 10); // 1: num1�� 10���� ũ�ų� ������
    printf("%d\n", num1 <= 10); 

    // ���׿�����
    int num2 = 5;
    int num3;

    if (num2)
        num3 = 100;
    else
        num3 = 200; // num2�� �����̸� 200 �Ҵ�

    num3 = num2 ? 100 : 200;
    printf("%d\n", num3);

    int num4 = 10;
    int num5;

    num5 = (num4 == 10) ? 100 : 20; //num4�� 10�̸� num2�� 100 �Ҵ�, �ƴϸ� 20 �Ҵ�

    printf("%d\n", num5); */

    int num1 = 10;

    if (num1 == 10) //num1�� 10�� ������ �˻�
        printf("10�Դϴ�.\n");
    if (num1 != 5) // num1�� 5�� �ٸ��� �˻�
        printf("5�� �ٸ��ϴ�.\n");
    if (num1 > 10) // num1�� 10���� ū�� �˻�
        printf("10���� Ů�ϴ�.\n");
    if (num1 < 10)
        printf("10���� �۽��ϴ�.\n");
    if (num1 >= 10)
        printf("10���� ũ�ų� �����ϴ�.\n");
    if (num1 <= 10)
        printf("10���� �۰ų� �����ϴ�.\n");

    float num2 = 0.1f;
    char c1 = 'a';

    if (num2 >= 0.09f) // num1�� �Ǽ� 0.09���� ũ�ų� ������ �˻�
        printf("0.09���� ũ�ų� �����ϴ�.\n");
    if (c1 == 'a')
        printf("a�Դϴ�.\n");
    if (c1 == 97)
        printf("97�Դϴ�.\n");
    if (c1 < 'b')
        printf("b���� �۽��ϴ�.\n");

    int num3 = 5;
    printf("%s\n", num3 == 10 ? "10�Դϴ�." : "10�� �ƴմϴ�.");



    return 0;
}
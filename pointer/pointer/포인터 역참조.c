#include <stdio.h>
int main() {

    int num1 = 10;
    int *numPtr;

    //numPtr = num1; // ������ ���, numPtr�� int ���������̰� num1 �� int ���̶� �ڷ����� ��ġ���� ����.
    //*numPtr = num1; //*numPtr�� int���̰� num1�� int �� �ڷ����� ��ġ��.
    numPtr = &num1; // numPtr�� int ���������̰�, &num1�� int�� ������ �ּ��̹Ƿ� �ڷ����� ��ġ��
                   // numPtr�� pointer to int, &num1�� address of int�̹Ƿ� �ڷ����� ��ġ��

    *numPtr = 20; // ������ �����ڷ� �޸� �ּҿ� �����Ͽ� 20�� ����. 

    printf("%d\n", *numPtr); // 20
    printf("%d\n", num1); // num1�� ���� �ٲ��.
    return 0;
}
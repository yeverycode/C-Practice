#include <stdio.h>
int main() {
    
    int num1 = 10;
    printf("%p\n", &num1);

    int* numPtr; // ������ ���� ����
    int num2 = 10;

    numPtr = &num2; // num1�� �޸� �ּҸ� ������ ������ ����

    printf("%p\n", numPtr); // ������ ���� numPtr�� ��, ����ø��� �޶�����.

    printf("%p\n", &num2); // num1�� ����, ���ึ�� �޶���.

    printf("%d\n", *numPtr); // ������ �����ڷ� num1�� �޸� �ּҿ� �����Ͽ� ���� �����´�.
    return 0;
}
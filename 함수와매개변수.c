/*#include <stdio.h>

void helloNumber(int num1) // ��ȯ�� ����, int �� �Ű����� 1��
{
    printf("Hello, %d\n", num1); // Hello, �� �Ű������� ������ ���ڿ� ���
}

int main() {
    helloNumber(10); //Hello, 10: hellonumber�� 10 �־� ȣ��
    helloNumber(20);

    return 0;
}
*/

#include <stdio.h>

int add(int a, int b)    // ��ȯ�� �ڷ����� int, int�� �Ű����� �� �� ����
{
    return a + b;    // �Ű����� a�� b�� ���� ����� ��ȯ
}

int main()
{
    int num1;

    num1 = add(10, 20);     // �Լ��� ȣ���� �� 10�� 20�� ����. 10�� 20�� ���� ���� 30�� ��ȯ��

    printf("%d\n", num1);   // 30

    return 0;
}
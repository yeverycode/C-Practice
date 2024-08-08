/*
#include <stdio.h>

void hello()  // ��ȯ���� �Ű������� ����
{
    printf("Hello, world!\n");
}

void bonjour()    // ��ȯ���� �Ű������� ����
{
    printf("bonjour le monde!\n");
}

int main()
{
    void (*fp)(); // ��ȯ���� �Ű������� ���� �Լ� ������ fp ����

    fp = hello; // hello �Լ��� �޸� �ּҸ� �Լ� ������ fp�� ����

    fp(); // Hello, world!: �Լ� �����ͷ� hello �Լ� ȣ��

    fp = bonjour; // bonjour �Լ��� �޸� �ּҸ� �Լ� ������ fp�� ����

    fp(); // bonjour le monde! : �Լ� �����ͷ� bonjour �Լ� ȣ��

    return 0;
}
*/

#include <stdio.h>

// ���� �Լ�
int add(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a + b;
}

// ���� �Լ�
int mul(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a * b;
}


int main()
{
    int (*fp)(int, int); // int�� ��ȯ��, int�� �Ű����� �ΰ��� �ִ� �Լ� ������ fp �ä���

    fp = add; //add �Լ��� �޸� �ּҸ� �Լ� ������ fp�� ����
    printf("%d\n", fp(10, 20));

    fp = mul; //mul �Լ��� �޸� �ּҸ� �Լ� ������ fp�� ����
    printf("%d\n", fp(10, 20));

    return 0;
}
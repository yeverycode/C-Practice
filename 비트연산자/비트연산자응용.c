#include <stdio.h>
int main() {

    unsigned char num1 = 1;
    // 2�� �ŵ����� ���ϱ�
    printf("%u\n", num1 << 1); 
    printf("%u\n", num1 << 2);
    printf("%u\n", num1 << 3);
    printf("%u\n", num1 << 4);
    printf("%u\n", num1 << 5);
    printf("%u\n", num1 << 6);
    printf("%u\n", num1 << 7);

    unsigned char num2 = 240;
    unsigned char num3 = 15;
    
    unsigned char num4, num5;
    num4 = num2 << 2;
    num5 = num3 >> 2;

    printf("%u\n", num4);
    printf("%u\n", num5);

    char c1 = -125; // ��ȣ �ִ� �ڷ���
    char c2;
    c2 = c1 >> 5; // ���������� 5�� �̵�, ���ڶ�� ������ ��ȣ��Ʈ�� ���� 1�� ä������.
    printf("%d\n", c2);

    char c3 = 113; 
    char c4 = -15;
    char c5, c6, c7, c8;

    c5 = c3 << 2;
    c6 = c4 << 2;
    c7 = c3 << 4;
    c8 = c4 << 4;
    printf("%d\n", c5); // 1100 0100 : ��ȣ ��Ʈ�� ����� �ǹǷ� ������� ������ �ȴ�.
    printf("%d\n", c6); // �̹� ������ ���� ��� ����

    printf("%d\n", c7);
    printf("%d\n", c8);
    return 0;
}
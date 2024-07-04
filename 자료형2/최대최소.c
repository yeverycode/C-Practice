// �ڷ��� ũ�Ⱑ �ƴ� �ִ��ּҰ��� ǥ���ϱ� ���ؼ��� limits.h �� ����ؾ��Ѵ�.

#include <stdio.h>
#include <limits.h>

int main() {
    char num1 = CHAR_MIN; //CHAR �� �ּ�
    short num2 = SHRT_MIN; //short�� �ּ�
    int num3 = INT_MIN; // int �� �ּ�
    long num4 = LONG_MIN; // long �� �ּ�
    long long num5 = LLONG_MIN; // long long �� �ּ�

    // char, short, int�� %d�� ����ϰ� long�� %ld, long long �� %ld �� ���
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    // main2 �Լ� ȣ��
    main2();
    main3();
    return 0;
}

// �ִ��� �Ѿ�� ���
int main2() {
    char num1 = CHAR_MAX + 1; // char �� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο�
    short num2 = SHRT_MAX + 1; // short
    int num3 = INT_MIN + 1; // int�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο�
    long long num4 = LLONG_MAX + 1; //long long�� �ִ񰪺��� ū ���� �Ҵ�, �����÷ο�

    // char, short, int�� %d�� ����ϰ� long long �� %lld�� ���
    // ��ȣ �ִ� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ����� �ٽ� �����Ѵ�.
    printf("%d %d %d %lld\n", num1, num2, num3, num4);

    unsigned char num5 = UCHAR_MAX + 1; // unsigned char �� �ִ񰪺��� ū �� �Ҵ�. �����÷ο�
    unsigned short num6 = USHRT_MAX + 1; // unsigned char �� �ִ񰪺��� ū �� �Ҵ�. �����÷ο�
    unsigned int num7 = UINT_MAX + 1; // unsigned int�� �ִ񰪺��� ū �� �Ҵ�. �����÷ο�
    unsigned long long num8 = ULLONG_MAX + 1;  // unsigned long long �� �ִ񰪺��� ū �� �Ҵ�. �����÷ο�

    // unsigned char, unsigned short, unsigned int�� %u�� ���
    // unsigned long long �� % llu�� ���
    // ��ȣ ���� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ� 0���� �ٽ� ����

    printf("%u %u %u %llu\n", num5, num6, num7, num8); // 0 0 0 0

    return 0;
}

// �ּڰ����� �۾����� ���, ����÷ο�
int main3() {
    char num1 = CHAR_MIN - 1; //char�� �ּڰ����� ���� �� �Ҵ�, ��� �÷ο�
    short num2 = SHRT_MIN - 1; // short �� �ּڰ����� ���� �� �Ҵ�, ��� �÷ο�
    int num3 = INT_MIN - 1; // int�� �ּڰ����� ���� ���� �Ҵ�, ����÷ο� �Ҵ�
    long long num4 = LLONG_MIN - 1; // long long �� �ּڰ����� ���� ���� �Ҵ�

    //chart, shor, int�� %d�� ����ϰ� long long �� %lld�� ���
    // ��ȣ �ִ� �������� �ּڰ����� �۾����� �ִ񰪺��� �ٽ� ����
    printf("%d %d %d %lld\n", num1, num2, num3, num4);

    unsigned char num5 = 0 - 1; // unsigned char�� �ּڰ����� ���� �� �Ҵ�, ����÷ο�
    unsigned short num6 = 0 - 1; // unsigned short�� �ּڰ����� ���� �� �Ҵ�, ����÷ο�
    unsigned int num7 = 0; //unsigned int�� �ּڰ����� ���� �� �Ҵ�, ����÷ο�
    unsigned long long num8 = 0 - 1; //unsigned long long�� �ּڰ����� ���� �� �Ҵ�, ����÷ο�

    // unsigned char, unsigned short, unsigned int�� %u�� ���
    // unsigned long long �� % llu�� ���
    // ��ȣ ���� �������� �ּڰ����� �۾����� �ִ񰪺��� �ٽ� ����
    printf("%u %u %u %llu\n", num5, num6, num7, num8);

    return 0;
}
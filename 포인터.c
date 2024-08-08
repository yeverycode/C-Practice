#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main() {
    int a = 5;
    double d = 3.54;

    // �ּҸ� �����ϴ� ���� ���� => ������
    int* ap = &a; // ������ 8 byte ���� �Ҵ� �ȴ�.
    // ap �� a �� '����', '������' �Ѵ�.

    double* dp = &d; 

    printf("%p\n", ap); // a�� �ּҰ�. 
    printf("%d\n", *ap); // a �� ��. ap �� ����Ű�� �޸𸮿� ����
    return 0;
}

int main() {
    int* p;
    int i = 3, j;

    p = &i; // i �� �ּҸ� p �� �����ض�
    j = *p; // p ������, i �� ���� ����. 3.
    j++; // j=4
    printf("1. %d\n", *p); // 3
    printf("2, %p\n", p); // i�� �ּ�
    printf("3. %d\n", j); // 4

    p = &j; // j �� �ּ�. �����ʹ� ������.
    printf("4. %d\n", *p); // 4
    printf("5. %p\n", p); //j �� �ּ�

    *p = *p + 3; // p ������ ���� 3�� ���ؼ� p ������ ���� ����
    // *p= 4+3=7
    printf("6. %d\n", i); //3
    printf("7. %d\n", j); // 7�� �ȴ�.
    printf("8. %d\n\n", *p); //7

    return 0;
} 

// �ҹ��ڸ� �����ϸ� �빮�ڷ� ��ȯ�ϰ�, �ҹ��ڰ� �ƴ϶�� ��ȯ���� �ʴ� �Լ�
// ������ �����Ѵ�.
void toUpper(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c -= 32;
    }
}

int main() {
    char ch;
    printf("�������Է� :");
    ch = getchar();
    toUpper(&ch); // �ּҰ��� ������ �ٶ���.
    printf("����� %c�Դϴ�.\n", ch);
    return 0;
} */

// ������ �Ǽ��� 10�� ���ϴ� �Լ�
void plusTen(int* a, double* b) {
    *a += 10;
    *b += 10.0;
}

int main() {
    int n;
    double d;

    // ����ڷκ��� ���� �Է� �ޱ�
    printf("���� �Է�: ");
    scanf("%d", &n);

    // ����ڷκ��� �Ǽ� �Է� �ޱ�
    printf("�Ǽ� �Է�: ");
    scanf("%lf", &d);

    // plusTen �Լ� ȣ��: n�� d�� 10�� ���ϴ� �Լ�
    plusTen(&n, &d);

    // ������ �� ���
    printf("%d %lf\n", n, d);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

union Box {//����ü ����
    short candy; // 2����Ʈ
    float snack; // 4����Ʈ
    char doll[8];
};

int main() {
    union Box b1; //����ü ���� ����

    printf("%d\n", sizeof(b1)); // ����ü ��ü ũ��� ���� ū �ڷ��� ũ��

    strcpy(b1.doll, "bear");

    printf("%d\n", b1.candy);
    printf("%f\n", b1.snack);
    printf("%s\n", b1.doll);

    printf("%d\n", sizeof(b1));  // 8: ����ü�� ��ü ũ��� ���� ū �ڷ����� ũ��
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char c1 = 'k';
    if (c1 == 'k')
        printf("k�Դϴ�.\n");

    int age; //�� ����
    scanf("%d", &age);

    if (age < 18)
        printf("û�ҳ� ���� �Ұ�\n");

    return 0;
}
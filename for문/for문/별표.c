#include <stdio.h>
int main() {
    // �ٱ��� ����, ������ ����

    /*for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {
            printf("j:%d ", j);
        }

        printf("i:%d\\n", i); // i���� ���� ���� ���
        printf("\n");  // ���� �������� ���ڸ� ��� ����� �� ���� �ٷ� �Ѿ
    } */

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n"); // ���� �������� ���� �� �׸� �� �����ٷ�
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j <= i)
                printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
    /*int num1;
    scanf("%d", &num1);

    if (num1 == 1)
        goto ONE;
    else if (num1 == 2)
        goto TWO;
    else
        goto EXIT;

ONE:
    printf("1�Դϴ�\n");
    goto EXIT; //���̺� EXIT �� �̵�
TWO:
    printf("2�Դϴ�.\n");
    goto EXIT; // ���̺� EXIT �� �̵�
EXIT:
    return 0; */

    //20�� �Ǹ� ������ ���������� �ڵ�

    int num1 = 0;

    bool exitOuterLoop = false; // �ٱ��� ������ ���������� �����ϴ� ����
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (num1 == 20) {
                exitOuterLoop = true;
                break;
            }
            num1++;
        }
        if (exitOuterLoop == true)
            break;
    }
    printf("%d\n", num1);

    // go to ���
    int num2 = 0;
    for (int k = 0; k < 10; k++) {
        for (int l = 0; l < 10; l++) {
            if (num2 == 20)
                goto EXIT; 
            
            num2++;
        }
    }

EXIT:
    printf("%d\n", num2);

    return 0;
}
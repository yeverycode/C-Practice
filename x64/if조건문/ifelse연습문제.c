#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*�������� 1
    unsigned long long num1 = 0 ;

    if (num1)
        printf("��\n");
    else
        printf("����\n"); */

    /*�������� 2
    int writtenTest = 78;
    int toeic = 870;

    if (writtenTest >= 80 && toeic >= 850)
        printf("�հ�\n");
    else
        printf("���հ�\n"); */

    // �ɻ繮��
    /*char c1;
    scanf("%c", &c1);
    if (c1 == 'a')
        printf("a�Դϴ�.\n");
    else
        printf("a�� �ƴմϴ�.\n");*/

    /* �ɻ繮��2
    int kor, eng, math, science;
    double avg = 0;

    scanf("%d %d %d %d", &kor, &eng, &math, &science);
    if (kor >= 0 && kor <= 100 && eng >= 0 && eng <= 100 && math >= 0 && math <= 100 && science >= 0 && science <= 100) {
        avg = (kor + eng + math + science) / 4;

        if (avg >= 85) {
            printf("�հ�");
        }
        else
            printf("���հ�");

    }

    else
        printf("�߸��� ����"); */

    /*��������
    char c1 = 'c';

    if (c1 == 'a')
        printf("a\n");
    else if (c1 == 'b')
        printf("b\n");
    else if (c1 == 'c')
        printf("c\n");
    else if (c1 == 'd')
        printf("d\n");
    else
        printf("x\n"); */

    // �ɻ繮�� : ����ī�� �ý���
    int age; // ������
    int money = 10000;

    scanf("%d", &age);
    if (age >= 7 && age <= 12)
        money -= 450;
    else if (age >= 13 && age <= 18)
        money -= 720;
    else
        money -= 1200;

    printf("%d", money);


    return 0;
}
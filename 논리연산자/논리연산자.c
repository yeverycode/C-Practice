#include <stdio.h>
int main() {
    printf("%d\n", 1 && 1); // ���̴�.
    printf("%d\n", 1 && 0); // �����̴�. (0�� �־)
    printf("%d\n", 0 && 1); // �����̴�.
    printf("%d\n", 0 && 0); // �����̴�.

    printf("%d\n", 0 || 1); // ���̴�.
    printf("%d\n", 1 || 1); // ���̴�.
    printf("%d\n", 0 || 0); // �����̴�.

    printf("%d\n", 2 && 3); // ���̴�.

    // Not ������ !
    printf("%d\n", !1); // NOT 1�� ����
    printf("%d\n", !0); // NOT 0�� ��
    printf("%d\n", !3); // NOT 3�� ����

    // ���ǽ� if �� ��������
    int num1 = 20;
    int num2 = 10;
    int num3 = 30;
    int num4 = 15;

    printf("%d\n", num1 > num2 && num3 > num4); // 1 ���� ��� ���̹Ƿ� 1�� ���
    printf("%d\n", (num1 > num2) && (num3 < num4)); // �ո� ���̹Ƿ� ����
    printf("%d\n", (num1 > num2) || (num3 < num4)); 
    printf("%d\n", (num1 < num2) || (num3 < num4));

    printf("%d\n", !(num3 < num4)); // ������ �ݴ��, ���� �ȴ�.

    if (num1 && num2) // num1�� num2�� ��� ������ �˻��Ѵ�.
        printf("��\n");
    else
        printf("����\n"); 

    if (num1 || num2) // �� �� �ϳ��� ������ �˻�
        printf("��\n");
    else
        printf("����\n");

    if (!num1)
        printf("��\n");
    else
        printf("����\n");

    int num5 = 0;
    int num6 = 1;

    if (num5 && num6)
        printf("��\n"); // ù��° ���� �����̸� �ι�°�� �˻����� �ʰ� �����̴�.
    else
        printf("����\n");

    if (num5 || num6)
        printf("��\n");
    else
        printf("����\n");

    printf("%s\n", (num5 && num6) ? "��" : "����");
    printf("%s\n", (num5 || num6) ? "��" : "����");

    return 0;
}
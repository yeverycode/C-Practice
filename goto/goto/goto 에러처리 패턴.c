#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // �ڰ� ������ ������ 30�� �������� �Ǻ��ϴ� ���α׷�

    /*int gender, age, isOwner; // ���� ���� 1, ���� 2. ���� ���� ���� : �ڰ� 1, ���� 0

    scanf("%d %d %d", &gender,&age, &isOwner);

    printf("�ȳ��ϼ���.\n");
    printf("���� ����.\n");

    if (gender == 2) {
        printf("�ȳ����輼��\n"); // �ߺ��ڵ�
        printf("���� �ݴ´�.\n");
        return 0; // ���α׷� ����
    }

    if (age < 30) {
        printf("�ȳ����輼��\n"); // �ߺ��ڵ�
        printf("���� �ݴ´�.\n");
        return 0; // ���α׷� ����
    }

    if (isOwner ==0) {
        printf("�ȳ����輼��\n"); // �ߺ��ڵ�
        printf("���� �ݴ´�.\n");
        return 0; // ���α׷� ����
    } */

    int gender, age, isOwner; // ���� ���� 1, ���� 2. ���� ���� ���� : �ڰ� 1, ���� 0

    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("�ȳ��ϼ���.\n");
    printf("���� ����.\n");

    if (gender == 2)
        goto EXIT;
    
    if (age < 30)
        goto EXIT;

    if (isOwner == 0)
        goto EXIT;

EXIT:
    printf("�ȳ����輼��\n"); // ����ó�� �ڵ� �� �� ���
    printf("���� �ݴ´�.\n");

    return 0;
}
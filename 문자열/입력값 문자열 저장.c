#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

    /*char s1[10]; // ũ�Ⱑ 10�� char�� �迭 ����
    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", s1); 

    printf("%s\n", s1); */

    // ���� �����Ͽ� ����
    // scanf �Լ����� %[^\n]s �� ����

    /*char s2[30];
    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%[^\n]s", &s2);

    printf("%s\n", s2);*/

    /*char* s3 = malloc(sizeof(char) * 10); // char 10�� ũ�⸸ŭ �����޸� �Ҵ�
    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%s", s3);

    printf("%s\n", s3); //���ڿ� ���� ���
    free(s3); //���� �޸� ���� */

    char s1[10];
    char s2[10];
    printf("���ڿ��� �ΰ� �Է��ϼ���: ");
    scanf("%s %s", s1, s2); // �������� ���е� ���ڿ� �ΰ� �Է¹���

    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}
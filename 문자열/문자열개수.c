#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strlen �Լ��� ����� ��� ����
int main() {
    /*char* s1 = "Hello";
    char s2[10] = "Hello";

    printf("%d\n", strlen(s1));
    printf("%d\n", strlen(s2));

    // strcmp �Լ� ����Ͽ� ���ڿ� ��

    int ret = strcmp(s1, s2); // ���ڿ��� ������ ��
    printf("%d\n", ret); // 0: �� ���ڿ� ������ 0 ��ȯ

    printf("%d\n", strcmp("aaa", "aaa"));    //  0: aaa�� aaa�� �����Ƿ� 0
    printf("%d\n", strcmp("aab", "aaa"));    //  1: aab�� aaa �߿��� aab�� ũ�Ƿ� 1
    printf("%d\n", strcmp("aab", "aac"));    // -1: aab�� aac �߿��� aac�� ũ�Ƿ� -1
    */
    char s1[20];
    char s2[20];

    printf("���ڿ� �� ���� �Է��ϼ���: ");
    scanf("%s %s", s1, s2);

    int ret = strcmp(s1, s2); // �Էµ� ���ڿ� ��

    switch (ret)
    {
    case 0:
        printf("�� ���ڿ��� ����\n");
        break;
    case 1:
        printf("%s���� %s�� ŭ\n", s2, s1);
        break;
    case -1:
        printf("%s���� %s�� ŭ\n", s1, s2);
        break;
    }
    return 0;
}
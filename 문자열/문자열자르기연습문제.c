#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    /*char s1[40] = "Alice's Adventures in Wonderland";

    char* ptr = strtok(s1, " ");

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }
    return 0;

    char s1[61] = { NULL, }; // �迭 ���� �� �ʱ�ȭ
    scanf("%s", s1);

    char* ptr = strtok(s1, ".");

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, ".");
    }

    return 0;*/

    // 1001 ũ���� ���� �迭 s1�� �����ϰ� ��� 0���� �ʱ�ȭ
    char s1[1001] = { 0 };
    // ������ ������ ���ڿ��� �Է¹޾� s1�� ����
    scanf("%[^\n]s", s1);

    // ���ڿ��� Ư�� �����ڷ� �и��Ͽ� ù ��° ��ū�� ptr�� ����
    char* ptr = strtok(s1, " -',.");
    int count = 0;  // "the"�� ������ �� ���� count�� 0���� �ʱ�ȭ

    // ptr�� NULL�� �ƴ� ���� �ݺ�
    while (ptr != NULL) {
        // ���� ��ū�� "the"�� ������ ��
        if (strcmp(ptr, "the") == 0) {
            count++;  // ������ count�� 1 ����
        }
        // ���� ��ū�� ������
        ptr = strtok(NULL, " -',.");
    }

    // "the"�� ������ ���
    printf("%d\n", count);
    return 0;  // ���α׷� ����
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    /*char word[30];
    int length; // ���ڿ� ����
    bool isPalindrome = true; // ȸ�� �Ǻ� ����, �ʱ� true

    printf("�ܾ �Է��ϼ���: ");
    scanf("%s", word);

    length = strlen(word); // ���ڿ��� ����

    // 0���� ���ڿ� ���� ���ݱ��� �ݺ�
    for (int i = 0; i < length / 2; i++) {

        if (word[i] != word[length - 1 - 1])
        {
            isPalindrome = false;
            break;
        }
    }
    printf("%d\n", isPalindrome); // ȸ�� �Ǻ��� ���

    // 2���ھ� ���
    char text[30] = "Hello";
    int length2;

    length2 = strlen(text);

    for (int i = 0; i < length2-1; i++) {
        printf("%c%c\n", text[i], text[i + 1]);
    }*/

    char text[100] = "this is C language";
    char* tokens[30] = { NULL, }; // �ڸ� ���ڿ��� �����͸� ������ �迭, NULL �� �ʱ�ȭ
    int count = 0;
    char* ptr = strtok(text, " "); // ������ �������� ���ڿ� �ڸ�

    while (ptr != NULL) {
        tokens[count] = ptr; // ���ڿ� �ڸ� �ڿ� �޸� �ּ� ���ڿ� ������ �迭�� ����
        count++;

        ptr = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%s %s\n", tokens[i], tokens[i+1]);
    }
    return 0;
}
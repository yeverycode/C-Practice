#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main() {
    /*char s1[30] = "2015-06-10T15:32:19";

    char* ptr = strtok(s1, "-T:"); 

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, "-T:"); // ���� ���ڿ��� �߶� �����͸� ��ȯ
    } */

    char s1[30] = "The Little Prince"; // ũ�Ⱑ 30�� char �� �迭 ����
    char* sArr[10] = {NULL,}; // �ʱ�ȭ
    int i = 0;

    char* ptr = strtok(s1, " "); // ���� �������� �ڸ�
    while (ptr != NULL) {
        sArr[i] = ptr;
        i++;
        ptr = strtok(NULL, " ");
    }

    for (i = 0; i < 10; i++) {
        if (sArr[i] != NULL)
            printf("%s\n", sArr[i]);
    }

    return 0;
}
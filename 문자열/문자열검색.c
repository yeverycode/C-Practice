#include <stdio.h>
#include <string.h>
int main() {

    /*char s1[30] = "A Garden Diary"; // ũ�Ⱑ 30�� char �� �迭�� ����

    char* ptr = strchr(s1, 'a');

    while (ptr != NULL) {
        // �˻��� ���ڿ��� ���������� �ݺ�
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'a'); // �����Ϳ� 1�� ���Ͽ� a �������� �˻�
    }

    char* (ptr2) = strrchr(s1, 'a');
    printf("%s\n", ptr2); */

    char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

    char* ptr = strstr(s1, "den");     // den���� �����ϴ� ���ڿ� �˻�, ������ ��ȯ

    while (ptr != NULL)                // �˻��� ���ڿ��� ���� ������ �ݺ�
    {
        printf("%s\n", ptr);           // �˻��� ���ڿ� ���
        ptr = strstr(ptr + 1, "den");  // den �����Ϳ� 1�� ���Ͽ� e���� �˻�
    }
    return 0;
}
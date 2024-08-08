#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> // sprintf �Լ��� ����� ��� ����
#include <stdlib.h>
int main() {

    char s1[20]; // ũ�Ⱑ 20�� char �� �迭 ����
    // sprintf(�迭, ����, ��)
    sprintf(s1, "Hello, %s", "world!");

    printf("%s\n", s1); // Hello, world! ���ڿ� ���

    char s2[30]; // ũ�Ⱑ 30�� char �� �迭�� ����
    sprintf(s2, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);

    printf("%s\n", s2);

    char* s3 = malloc(sizeof(char) * 30);
    sprintf(s3, "Hello, %s", "world!");
    printf("%s\n", s3);

    free(s3);
    return 0;
}
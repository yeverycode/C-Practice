#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // char *ptr : �ּҸ� �����ϴ� ������ �����Ϳ��� ���ڿ� ������ �Ұ�
    char str[255];

    printf("���ڿ� �Է�: ");
    // scanf���� %s : �ּ� ��ġ���� ���ڿ��� ������ �� �ι��ڸ� ���
    // ������ ������ ���ڿ��� ���� �� ����. , ���ÿ� �������� �Է¹޴� �Լ��̱� ����.
    //scanf("%s", str);

    gets_s(str, 255);
    // window �� �Լ�, �Է¹��� ���� �ּ�, �ִ� �Է� ��� ũ��
    // gets_s(�Է¹��� ���� �ּ�, �ִ� �Է� ��� ũ��)

    // printf������ %s : �ּҺ��� null ���� ���������� ���ڿ��� ���
    //printf("%s", str);

    // ���ڿ��� �Է¹޾Ƽ� �빮���� ��츸 '*' �� ��ȯ�ϴ� �ڵ�
    int len = strlen(str);
    int cnt = 0;
    printf("%d\n", len);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' || str[i] <= 'Z') {
            str[i] = '*';
            cnt++;
        }
            
    }

    /* ���ѷ��� ���
    for (int i = 0;; i++) {

        if (str[i] == '\0') {
            break;
        } // ���� ���� : ����� ���ڰ� �ι����� ��� Ż��

        if (str[i] >= 'A' || str[i] <= 'Z')
            str[i] = '*';
    } */

    printf("%s\n", str);
    return 0;
}
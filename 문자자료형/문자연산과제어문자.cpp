#include <stdio.h>
int main() {
    printf("%c %d\n", 'a' + 1, 'a' + 1); // b�� 98 ���. 
    printf("%c %d\n", 97 + 1, 97 + 1); // b�� 98 ���
    // 'a' �� 97�� ���� �����̴�.
    // � ���̵� ������� 0~255 ������ �ƽ�Ű �ڵ��̸� �������

    char c1 = 'a';
    printf("%c %d\n", c1 + 1, c1 + 1);

    char c2 = 'b';
    char lineFeed = '\n'; // ���� ���� \n�� �Ҵ��Ѵ�
    printf("%c%c%c%c", c1, lineFeed, c2, lineFeed); //����ڵ� %c�� ����� �� �ִ�.
    printf("%d 0x%x\n", lineFeed, lineFeed); // 10 0xa ���� ������ �ƽ�Ű�ڵ� ���
    return 0;
}
#include <stdio.h>
int main() {

    int numArr[3][4] = {
         { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    }; // ���� ũ�� 3, ���� ũ�� 4�� int �� 2���� �迭 ����

    printf("%d\n", numArr[0][0]);    // 11 : ���� �ε��� 0, ���� �ε��� 0�� ��� ���
    printf("%d\n", numArr[1][2]);    // 77 : ���� �ε��� 1, ���� �ε��� 2�� ��� ���
    printf("%d\n", numArr[2][0]);    // 99 : ���� �ε��� 2, ���� �ε��� 0�� ��� ���
    printf("%d\n", numArr[2][3]);    // 132: ���� �ε��� 2, ���� �ε��� 2�� ��� ���
    
    printf("%d\n", sizeof(numArr)); // 48 : 4 ����Ʈ ũ���� ��Ұ� 12���̹Ƿ� 48�̴�.
    
    int col = sizeof(numArr[0]) / sizeof(int); 
    
    int row = sizeof(numArr) / sizeof(numArr[0]);

    printf("%d\n", col);    // 4
    printf("%d\n", row);    // 3

    // �ݺ������� ��� ��� ����ϱ�
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", numArr[i][j]);
        }
        printf("\n");
    }
    
    for (int i = row - 1; i >= 0; i--) {
        for (int j = col - 1; j >= 0; j--) {
            printf("%d ", numArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
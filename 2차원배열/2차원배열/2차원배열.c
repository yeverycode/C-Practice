#include <stdio.h>
int main() {

    int numArr[3][4] = {
         { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    }; // 세로 크기 3, 가로 크기 4인 int 형 2차원 배열 선언

    printf("%d\n", numArr[0][0]);    // 11 : 세로 인덱스 0, 가로 인덱스 0인 요소 출력
    printf("%d\n", numArr[1][2]);    // 77 : 세로 인덱스 1, 가로 인덱스 2인 요소 출력
    printf("%d\n", numArr[2][0]);    // 99 : 세로 인덱스 2, 가로 인덱스 0인 요소 출력
    printf("%d\n", numArr[2][3]);    // 132: 세로 인덱스 2, 가로 인덱스 2인 요소 출력
    
    printf("%d\n", sizeof(numArr)); // 48 : 4 바이트 크기의 요소가 12개이므로 48이다.
    
    int col = sizeof(numArr[0]) / sizeof(int); 
    
    int row = sizeof(numArr) / sizeof(numArr[0]);

    printf("%d\n", col);    // 4
    printf("%d\n", row);    // 3

    // 반복문으로 요소 모두 출력하기
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
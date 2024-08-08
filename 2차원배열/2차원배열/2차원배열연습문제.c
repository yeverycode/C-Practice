#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*int matrix[8][8] = {
       {  1,  2,  3,  4,  5,  6,  7,  8 },
       {  9, 10, 11, 12, 13, 14, 15, 16 },
       { 17, 18, 19, 20, 21, 22, 23, 24 },
       { 25, 26, 27, 28, 29, 30, 31, 32 },
       { 33, 34, 35, 36, 37, 38, 39, 40 },
       { 41, 42, 43, 44, 45, 46, 47, 48 },
       { 49, 50, 51, 52, 53, 54, 55, 56 },
       { 57, 58, 59, 60, 61, 62, 63, 64 }
    };

    // 가로 
    int row = sizeof(matrix) / sizeof(matrix[0]);
    //세로
    int col = sizeof(matrix[0]) / sizeof(int);

    for (int i = 0; i < row; i++) {
        printf("%d ", matrix[i][i]);
    } */

    int matrix[5][5];

    scanf("%d %d %d %d %d",
        &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
    scanf("%d %d %d %d %d",
        &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
    scanf("%d %d %d %d %d",
        &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
    scanf("%d %d %d %d %d",
        &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
    scanf("%d %d %d %d %d",
        &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);

    // 기준이 되는 값
    // 전치 행렬 출력하기
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
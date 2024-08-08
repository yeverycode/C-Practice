#include <stdio.h>
int main() {
    // 바깥은 세로, 안쪽은 가로

    /*for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {
            printf("j:%d ", j);
        }

        printf("i:%d\\n", i); // i값과 개행 문자 출력
        printf("\n");  // 가로 방향으로 숫자를 모두 출력한 뒤 다음 줄로 넘어감
    } */

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n"); // 가로 방향으로 별을 다 그린 뒤 다음줄로
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j <= i)
                printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p[3];    // 크기가 3인 구조체 배열 생성

    p[0].x = 10;    // 인덱스로 요소에 접근한 뒤 점으로 멤버에 접근
    p[0].y = 20;
    p[1].x = 30;
    p[1].y = 40;
    p[2].x = 50;
    p[2].y = 60;

    printf("%d %d\n", p[0].x, p[0].y);    // 10 20
    printf("%d %d\n", p[1].x, p[1].y);    // 30 40
    printf("%d %d\n", p[2].x, p[2].y);    // 50 60

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언된 헤더파일

struct Point2D {
    int x, y;
};

int main() {
    struct Point2D* p[3];

    // 구조체 포인터 배열 전체 크기에서 요소의 크기(구조체 포인터)
    // 로 나눠서 요소 개수를 구함
    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D*); i++) {
        p[i] = malloc(sizeof(struct Point2D)); // 각 요소에 구조체 크기만큼 메모리 할당
    }

    p[0]->x = 10; // 인덱스로 요소에 접근하여 화살표 연산자로 멤버에 접근
    p[0]->y = 20;
    p[1]->x = 30;
    p[1]->y = 40;
    p[2]->x = 50;
    p[2]->y = 60;

    printf("%d %d\n", p[0]->x, p[0]->y);
    printf("%d %d\n", p[1]->x, p[1]->y);
    printf("%d %d\n", p[2]->x, p[2]->y);

    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D*); i++) {
        free(p[i]);
    }

    return 0;
}
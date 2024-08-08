#include <stdio.h>
#include <string.h> //memset 함수가 선언된 헤더 파일

/*struct Point2D {
    int x, y;
};

int main() {

    struct Point2D p1;

    memset(&p1, 0, sizeof(struct Point2D)); // p1을 구조체 크기만큼 0으로 설정

    printf("%d %d\n", p1.x, p1.y); // memset 을 사용하여 모두 0으로 설정

    return 0;
}

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D* p1 = malloc(sizeof(struct Point2D));    // 구조체 크기만큼 메모리 할당

    memset(p1, 0, sizeof(struct Point2D));    // p1을 구조체 크기만큼 0으로 설정

    printf("%d %d\n", p1->x, p1->y);    // 0 0: memset을 사용하여 0으로 설정했으므로
    // x, y 모두 0

    free(p1);    // 동적 메모리 해제

    return 0;
}

//구조체 포인터 복사
#include <stdio.h>
#include <string.h>    // memcpy 함수가 선언된 헤더 파일

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;
    struct Point2D p2;

    p1.x = 10;    // p1의 멤버에만 값 저장
    p1.y = 20;    // p1의 멤버에만 값 저장

    memcpy(&p2, &p1, sizeof(struct Point2D));    // Point2D 구조체 크기만큼 p1의 내용을 p2로 복사

    printf("%d %d\n", p2.x, p2.y);    // 10 20: p1의 내용을 p2로 복사했으므로 10 20

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memcpy 함수가 선언된 헤더 파일

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D* p1 = malloc(sizeof(struct Point2D));
    struct Point2D* p2 = malloc(sizeof(struct Point2D));

    p1->x = 10;    // p1의 멤버에만 값 저장
    p1->y = 20;    // p1의 멤버에만 값 저장

    memcpy(p2, p1, sizeof(struct Point2D));    // Point2D 구조체 크기만큼 p1의 내용을 p2로 복사

    printf("%d %d\n", p2->x, p2->y);    // 10 20: p1의 내용을 p2로 복사했으므로 10 20

    free(p2);
    free(p1);

    return 0;
}
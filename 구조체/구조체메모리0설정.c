#include <stdio.h>
#include <string.h> //memset �Լ��� ����� ��� ����

/*struct Point2D {
    int x, y;
};

int main() {

    struct Point2D p1;

    memset(&p1, 0, sizeof(struct Point2D)); // p1�� ����ü ũ�⸸ŭ 0���� ����

    printf("%d %d\n", p1.x, p1.y); // memset �� ����Ͽ� ��� 0���� ����

    return 0;
}

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D* p1 = malloc(sizeof(struct Point2D));    // ����ü ũ�⸸ŭ �޸� �Ҵ�

    memset(p1, 0, sizeof(struct Point2D));    // p1�� ����ü ũ�⸸ŭ 0���� ����

    printf("%d %d\n", p1->x, p1->y);    // 0 0: memset�� ����Ͽ� 0���� ���������Ƿ�
    // x, y ��� 0

    free(p1);    // ���� �޸� ����

    return 0;
}

//����ü ������ ����
#include <stdio.h>
#include <string.h>    // memcpy �Լ��� ����� ��� ����

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;
    struct Point2D p2;

    p1.x = 10;    // p1�� ������� �� ����
    p1.y = 20;    // p1�� ������� �� ����

    memcpy(&p2, &p1, sizeof(struct Point2D));    // Point2D ����ü ũ�⸸ŭ p1�� ������ p2�� ����

    printf("%d %d\n", p2.x, p2.y);    // 10 20: p1�� ������ p2�� ���������Ƿ� 10 20

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // memcpy �Լ��� ����� ��� ����

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D* p1 = malloc(sizeof(struct Point2D));
    struct Point2D* p2 = malloc(sizeof(struct Point2D));

    p1->x = 10;    // p1�� ������� �� ����
    p1->y = 20;    // p1�� ������� �� ����

    memcpy(p2, p1, sizeof(struct Point2D));    // Point2D ����ü ũ�⸸ŭ p1�� ������ p2�� ����

    printf("%d %d\n", p2->x, p2->y);    // 10 20: p1�� ������ p2�� ���������Ƿ� 10 20

    free(p2);
    free(p1);

    return 0;
}
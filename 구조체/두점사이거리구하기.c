#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*struct Point2D {
    int x;
    int y;
};

int main() {

    struct Point2D p1; // Á¡1
    struct Point2D p2; // Á¡2

    p1.x = 30;
    p1.y = 20;

    p2.x = 60;
    p2.y = 50;

    printf("p1: %d %d\n", p1.x, p1.y);
    printf("p2: %d %d\n", p2.x, p2.y);

    int a = p2.x - p1.x;
    int b = p2.y - p1.y;

    //double c = sqrt((a * a) + (b * b));
    double c = sqrt(pow(a, 2) + pow(b, 2));
    printf("%f\n", c);

    return 0;
}

struct Rectangle {
    int x1, y1;
    int x2, y2;
};

int main()
{
    struct Rectangle rect;
    int area;

    rect.x1 = 20;
    rect.y1 = 20;
    rect.x2 = 40;
    rect.y2 = 30;

    int a, b;
    a = abs((rect.x2) - (rect.x1));
    b = abs((rect.y2) - (rect.y1));
    area = a * b;

    printf("%d\n", area);

    return 0;
}*/

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;
    struct Point2D p2;
    double distance;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    double a = pow((p2.x - p1.x),2);
    double b = pow((p2.y - p1.y), 2);
    distance = sqrt(a + b);
    printf("%f\n", distance);

    return 0;
}
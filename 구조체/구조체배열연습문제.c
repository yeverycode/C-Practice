/*#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p[3];

    p[0].x = 10;
    p[0].y = 20;
    p[1].x = 30;
    p[1].y = 40;
    p[2].x = 50;
    p[2].y = 60;

    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D); i++) {
        printf("%d %d\n", p[i].x, p[i].y);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{

    struct Person* p[3000];

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++) {
        p[i] = malloc(sizeof(struct Person*));
        memset(p[i], 0, sizeof(struct Person*));
    }
    
    printf("%d\n", p[2000]->age);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        free(p[i]);
    }

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p[4];
    double length = 0.0f;

    scanf("%d %d %d %d %d %d %d %d",
        &p[0].x, &p[0].y, &p[1].x, &p[1].y, &p[2].x, &p[2].y, &p[3].x, &p[3].y
    );

    double a = sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2));
    double b = sqrt(pow(p[2].x - p[1].x, 2) + pow(p[2].y - p[1].y, 2));
    double c = sqrt(pow(p[3].x - p[2].x, 2) + pow(p[3].y - p[2].y, 2));

    length = a + b + c;

    printf("%f\n", length);

    return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main()
{
    struct Person* p[5];

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        p[i] = malloc(sizeof(struct Person*));
    }

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++) {
        scanf("%s %d", p[i]->name, &(p[i]->age));
    }

    int max = (p[0]->age);
    int maxIndex = 0;

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++) {
        if ((p[i]->age) > max) {
            max = (p[i]->age);
            maxIndex = i;
        }
    }

    printf("%s\n", p[maxIndex]->name);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        free(p[i]);
    }
    return 0;
}
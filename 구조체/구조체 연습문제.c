#include <stdio.h>

/*struct Point2D {
    int x;
    int y;
};

int main() {
    struct Point2D p1;
    p1.x = 10;
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}

typedef struct Point2D {
    int x;
    int y;
}Point2D;

int main() {
    Point2D p1 ;
    p1.x = 10;
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);

    return 0;

}

typedef struct {
    int x;
    int y;
}Point2D;

int main() {
    Point2D p1;

    p1.x = 10;
    p1.y = 20;

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}*/

typedef struct{
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
}Dashboard;

int main() {

    Dashboard d1;

    d1.speed = 80;
    d1.fuel = 'F';
    d1.mileage = 5821.442871;
    d1.engineTemp = 200;
    d1.rpm = 1830;

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Fuel: %c\n", d1.fuel);
    printf("Mileage: %fkm\n", d1.mileage);
    printf("Engine temp: %d¡É\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);

    return 0;
}
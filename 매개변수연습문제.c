/*#include <stdio.h>

void printType(char type)
{
    printf("Type %c\n", type);
}

int main()
{

    printType('X');
    
    return 0;
}

#include <stdio.h>

float sub(float num1,float num2) {
    return (num1 - num2);
}

int main()
{
    float num1;

    num1 = sub(1.0f, 0.1f);

    printf("%f\n", num1);

    return 0;
}

#include <stdio.h>

float setAttackSpeed(float num1) {
    printf("Attack Speed: %f\n", num1);
}


int main()
{
    setAttackSpeed(0.638f);
    setAttackSpeed(1.23f);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long add(long long num1, long long num2) {
    long long sum = num1 + num2;
    return sum;
}

int main()
{
    long long num1, num2;

    scanf("%lld %lld", &num1, &num2);

    printf("%lld\n", add(num1, num2));

    return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Point3D {
    float x;
    float y;
    float z;
};

struct Point3D* allocPoint3D(float x, float  y, float z) {
    struct Point3D* pos1= malloc(sizeof(struct Point3D));
    pos1->x = x;
    pos1->y = y;
    pos1->z = z;
    return pos1;
}

int main()
{
    float x, y, z;
    struct Point3D* pos1;

    scanf("%f %f %f", &x, &y, &z);

    pos1 = allocPoint3D(x, y, z);

    printf("%f %f %f\n", pos1->x, pos1->y, pos1->z);

    free(pos1);

    return 0;
}
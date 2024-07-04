#include <stdio.h>
#include <float.h>
int main() {
    /*
    float num1 = 1.800000f;
    double num2 = 2.900000;
    long double num3 = 3.7l;

    printf("%f %f %Lf\n", num1, num2, num3);
    printf("%d %d\n", sizeof(num1), sizeof(num2));

    return 0; 

    double doubleMin, doubleMax;
    long double longDoubleMin, longDoubleMax;

    doubleMin = DBL_MIN;
    doubleMax = DBL_MAX;
    longDoubleMin = LDBL_MIN;
    longDoubleMax = LDBL_MAX;

    printf("%e %e\n", doubleMin, doubleMax);
    printf("Le %Le\n", longDoubleMin, longDoubleMax);

    return 0;*/

    float num1 = -FLT_MAX ;
    num1 = num1 * 1000.0f;
    printf("%f\n", num1);
    return 0;
}
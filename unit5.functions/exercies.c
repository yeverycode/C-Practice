/*#include <stdio.h>
int cube(int y);

int main(void)
{
    for (int x = 1; x <= 10; ++x)
        printf("%u\n", cube(x));
}

int cube(int y)
{
    return y * y * y;
} 

#include <stdio.h>
#include <math.h>

double calculateCharges(int time);

double calculateCharges(int time)
{
    double charge;
    double dayofcharge;

    if (time <= 8) {
        charge = 25.00;
    }

    else if (time > 24) {
        dayofcharge = 50 * ceil(time / 24.0);
        charge = dayofcharge + (0.50 * time);
    }

    else {
        dayofcharge = 25.00 + 5 * (time - 8);

        if (dayofcharge >= 50) {
            charge = 50;
        }

        charge = dayofcharge + (0.50 * time);
    }

    return charge;
}

int main()
{
    double charge;
    printf("%s%10s%10s", "Car", "Hours", "Charge");
    puts("");
    printf("%d%9d%12.2f", 1, 12, calculateCharges(12));
    puts("");
    printf("%d%9d%13.2f", 2, 34, calculateCharges(34));
    puts("");
    printf("%d%9d%13.2f", 3, 48, calculateCharges(48));
    puts("");
    printf("%s%5d%13.2f", "TOTAL", 94, calculateCharges(12)+ calculateCharges(34)+ calculateCharges(48));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    for (int i = 0; i < 10; i++) {
        int result = 3 + rand() % 28;

        if (result % 3 == 0)
            printf("%d\n", result);
    }
    puts("");
    for (int i = 0; i < 9; i++) {
        int result = 3 + rand() % 17;

        if ((result-1) % 2 == 0)
            printf("%d\n", result);
    }
    puts("");
    for (int i = 0; i < 7; i++) {
        int result = 3 + rand() % 31;

        if ((result +2) % 5 == 0)
            printf("%d\n", result);
    }
    
} */

#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b);

double hypotenuse(double a, double b) {
    double c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int main() {

    printf("%.2f\n", hypotenuse(3.0,4.0));
    printf("%.2f\n", hypotenuse(5.0,12.0));
    printf("%.2f\n", hypotenuse(8.0,15.0));

    return 0;
}
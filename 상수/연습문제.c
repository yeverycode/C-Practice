#include <stdio.h>
int main() {

    /*연습문제 1
    printf("H%cllo, %s %d %Le\n",  'e',  "world!", 8,  4.9e-302L); */

    /*연습문제 2
    const unsigned long long con1 = 10ULL;
    const float con2 = 3.200000F;
    const char con3 = 't';

    printf("%llu %f %c\n", con1, con2, con3); */

    /* // 심사문제
    printf("%s %o %lld %Lf\n", "Hello, world!", 62, -2147483647ll, 4.528172l);
    printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2147483647ll, 4.528172l); */

    // 심사문제 
    const long double con1 = -2.225074e-308l;
    const int con2 = 0x1285;
    const long long con3 = 9223372036865775807LL;

    printf("%Le 0x%x %lld\n", con1, con2, con3);
    return 0;
}
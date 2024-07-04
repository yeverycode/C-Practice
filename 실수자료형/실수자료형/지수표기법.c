#include <stdio.h>
int main() {
    float num1 = 3.e5f; // 지수표기법으로 30000을 표기, float 뒤에 f
    double num2 = -1.3827e-2; // 지수표기법으로 =0.013827표기, double 뒤에 아무것도 x
    long double num3 = 5.21e+9l; //5210000000, long double은 숫자 뒤에 l 을 붙인다.

    printf("%f %f %Lf\n", num1, num2, num3); //float와 double은 %f 로 출력, long double은 %Lf로 출력
    printf("%e %e %Le\n", num1, num2, num3); // float와 double은 %e 로 출력, long double은 %Le로 출력

    return 0;

}
#include <stdio.h>
int main() {
    float num1 = 0.1f; // 당밀정도 부동소수점 변수를 선언하고 값을 할당, float는 숫자에 f를 붙임

    double num2 = 3867.215820; // 배밀정도 부동소수점 변수를 선언하고 값을 할당, double은 숫자에 아무것도 붙이지 않음

    long double num3 = 9.327513l; // 배정밀도 부동소수점 변수를 선언하고 값을 할당, long double은 숫자 뒤에 1을 붙인다.

    // float와 double은 %f 로 출력, long double은 %lf 로 출력
    printf("%f %f %lf\n", num1, num2, num3); 

    return 0;
}
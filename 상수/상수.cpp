#include <stdio.h>
int main() {

    printf("%d\n", 10); // 10: 정수 리터럴
    printf("%f\n", 0.1f); // 0.100000 : 실수 리터럴
    printf("%c\n", 'a'); // a: 문자 리터럴
    printf("%s\n", "Hello, world!"); // 문자열 리터럴

    printf("%d\n", 19); // 19: 10진 정수 리터럴
    printf("0%o\n", 017); // 8진 정수 리터럴 , 8진수 앞에 0을 붙여 구분
    printf("0x%X\n", 0x1F); // 16진 정수 리터럴 , 16진수 앞에 0x를 붙여 구분
    
    //실수의 리터럴 표기방법
    printf("%f\n", 0.1f); 
    printf("%f\n", 0.1F); //실수 리터럴 소수점 표기법
    printf("%f\n", 1.0e-5f);
    printf("%f\n", 1.0E-5F); //실수 리터럴 지수 표기법
    return 0;
}
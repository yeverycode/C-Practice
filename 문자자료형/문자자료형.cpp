#include <stdio.h>
int main() {
    /*
    char c1 = 'a'; // C언어에서 문자는 '' 로 묶어 표시
    // char c1 = 'Hello, world!'; // 잘못된 사용법, 작은 따옴표는 문자 하나만 묶을 수 있다.
    // unsigned short magic = 'BA' // 정수형 변수에 2byte 값 저장

    char c2 = 'b'; // 문자 변수를 선언하고 문자 b를 저장

    // char를 %c로 출력하면 문자가 출력, %d로 출력하면 정수가 출력
    printf("%c, %d\n", c1, c1); // a, 97 출력
    printf("%c, %d\n", c2, c2); // b, 98 출력
    */

    // 16진수 출력하기
    char c1 = 0x61; //a의 아스키코드 값
    char c2 = 0x62; //b의 아스키코드 값

    //char 을 %c로 출력하면 문자가 출력, %d로 출력하면 정수가 출력
    printf("%c, %d, 0x%x\n", c1, c1, c1); // a,97, 0x61
    printf("%c, %d, 0x%x\n", c2, c2, c2); // b,98, 0x62

    // 정수와 문자의 차이
    char a1 = '0';
    char a2 = 0;

    printf("%c %d\n", a1, a1); // 0 48 : 문자 상태로 0이 출력, 0의 아스키 코드 48 출력
    printf("%c %d\n", a2, a2); //아스키코드 0은 아무것도 출력되지 않는다.

    return 0;
}
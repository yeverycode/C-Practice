#include <stdio.h>
int main() {

    // const 자료형 상수이름= 값;
    const int con1 = 1; // 상수. 선언과 동시에 초기화
    const float con2 = 0.1f; // 상수. 선언과 동시에 초기화
    const char con3 = 'a'; // 상수. 선언과 동시에 초기화.

    // con1 = 2; // 상수에 값을 할당하면 컴파일 에러가 발생한다.
    printf("%d %f %c", con1, con2, con3); 

    
    return 0;
}
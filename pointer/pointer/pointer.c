#include <stdio.h>
int main() {
    
    int num1 = 10;
    printf("%p\n", &num1);

    int* numPtr; // 포인터 변수 선언
    int num2 = 10;

    numPtr = &num2; // num1의 메모리 주소를 포인터 변수에 저장

    printf("%p\n", numPtr); // 포인터 변수 numPtr의 값, 실행시마다 달라진다.

    printf("%p\n", &num2); // num1의 변수, 실행마다 달라짐.

    printf("%d\n", *numPtr); // 역참조 연산자로 num1의 메모리 주소에 접근하여 값을 가져온다.
    return 0;
}
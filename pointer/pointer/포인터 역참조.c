#include <stdio.h>
int main() {

    int num1 = 10;
    int *numPtr;

    //numPtr = num1; // 컴파일 경고, numPtr은 int 포인터형이고 num1 은 int 형이라 자료형이 일치하지 않음.
    //*numPtr = num1; //*numPtr은 int형이고 num1도 int 라 자료형이 일치함.
    numPtr = &num1; // numPtr은 int 포인터형이고, &num1은 int형 변수의 주소이므로 자료형이 일치함
                   // numPtr은 pointer to int, &num1은 address of int이므로 자료형이 일치함

    *numPtr = 20; // 역참조 연산자로 메모리 주소에 접근하여 20을 저장. 

    printf("%d\n", *numPtr); // 20
    printf("%d\n", num1); // num1의 값도 바뀐다.
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*long long* numPtr1; // long long 형 포인터
    float* numPtr2; 
    char *cPtr1; // char 형 포인터

    long long num1 = 1 ;
    float num2 = 3.5f;
    char c1 = 'a';

    numPtr1 = &num1;
    numPtr2 = &num2;
    cPtr1 = &c1;

    printf("%lld\n", *numPtr1);
    printf("%f\n", *numPtr2);
    printf("%c\n", *cPtr1); */

    int num1 = 10;
    char c1 = 'a';
    int* numPtr1 = &num1;
    char* cPtr1= &c1;

    void* ptr; // void 형 포인터 선언

    //포인터 자료형이 달라도 컴파일 경고가 발생하지 않는 경우
    ptr = numPtr1; // void 포인터에 int 포인터 저장
    ptr = cPtr1; // void 포인터에 char 포인터 저장

    //포인터 자료형이 달라도 컴파일 경고가 발생하지 않는 경우
    //numPtr1 = ptr; // int 포인터에 void 포인터 저장
    //cPtr1 = ptr; // char  포인터에 void 포인터 저장

    int** numPtr2;
    numPtr2 = &numPtr1;
    printf("%d\n", **numPtr2);

    // printf("%d\n", *ptr); // void 는 역참조가 안된다.
    return 0;
}
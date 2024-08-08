/*#include <stdio.h>

int* ten() // int 포인터를 반환하는 ten 함수 정의
{
    int num1 = 10; //num1은 함수 ten 이 끝나면 사라짐

    return &num1;    // 함수에서 지역 변수의 주소를 반환하는 것은 잘못된 방법
} //        ↑ warning C4172: 지역 변수 또는 임시 변수의 주소를 반환하고 있습니다.

int main() {
    int* numPtr;
    numPtr = ten(); // 함수를 호출하고 반환값을 numPtr에 저장
    printf("%d\n", *numPtr);    // 10: 값이 나오긴 하지만 이미 사라진 변수를 출력하고 있음

    return 0;
*/

#include <stdio.h>
#include <stdlib.h> // malloc,free 함수가 선언된 헤더 파일

int* ten() //int 포인터를 반환하는 ten 함수 정의
{
    int* numPtr = malloc(sizeof(int)); //int 크기만큼 동적 메모리 할당
    *numPtr = 10;
    return numPtr; // 포인터 반환, malloc로 메모리를 할당하면 함수가 끝나도 사라지지 않는다.
}

int main() {
    int* numPtr;
    numPtr = ten(); // 함수를 호출하고 반환값을 저장
    printf("%d\n", *numPtr); // 메모리 해제까지 안전
    free(numPtr);    // 다른 함수에서 할당한 메모리라도 반드시 해제

    return 0;
}
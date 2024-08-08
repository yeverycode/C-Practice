/*#include <stdio.h>

int one()    // 반환값이 int형인 one 함수 정의
{
    return 1;    // 1을 반환
}

int main()
{
    int num1;

    num1 = one();    // int형을 반환했으므로 int형 변수에 저장

    printf("%d\n", num1);    // 1

    return 0;
}*/

#include <stdio.h>
#include <stdbool.h> // bool, true, false 가 정의된 헤더 파일
float realNumber() {
    return 1.234567f;    // 1.234567: float형을 반환
}

bool truth() {
    return true;    // true: bool형을 반환
}

int main() {
    float num1;
    bool b1;

    num1 = realNumber(); //float형을 반환했으므로 float형 변수에 저장
    b1 = truth();

    printf("%f\n", num1);
    printf("%d\n", b1);
}
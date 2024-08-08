/*#include <stdio.h>

void helloNumber(int num1) // 반환값 없음, int 형 매개변수 1개
{
    printf("Hello, %d\n", num1); // Hello, 와 매개변수를 조합한 문자열 출력
}

int main() {
    helloNumber(10); //Hello, 10: hellonumber에 10 넣어 호출
    helloNumber(20);

    return 0;
}
*/

#include <stdio.h>

int add(int a, int b)    // 반환값 자료형은 int, int형 매개변수 두 개 지정
{
    return a + b;    // 매개변수 a와 b를 더한 결과를 반환
}

int main()
{
    int num1;

    num1 = add(10, 20);     // 함수를 호출할 때 10과 20을 전달. 10과 20을 더한 값인 30이 반환됨

    printf("%d\n", num1);   // 30

    return 0;
}
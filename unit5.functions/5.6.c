// Fig 5.6: fig 05_05.c
// Demonstrating the function call stack
// and stack frames using a function square.
#include <stdio.h>

int square(int); // 함수 square 의 프로토타입

int main()
{
    int a = 10; // value to square (local automatic variable in main) main 의 지역 자동 변수
    
    printf("%d squared %d\n", a, square(a)); //display a squared, a의 제곱 표시
}

// returns the square of an integer
int square(int x) // x is a local variable
{
    return x * x; // calculated square and return result
}
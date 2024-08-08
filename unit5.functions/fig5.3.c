// Fig. 5.3: fig05_03.c
// Creating and using a programmer-defined function.
#include <stdio.h>

int square(int y); // function prototype

int main(void)
{
    // loop 10 times and calculate and output square of x each time
    for (int x = 1; x <= 10; x++) {
        printf("%d ", square(x)); // function call
    }

    puts("");
}

// square function definition returns the square of its parameter
// square 함수 정의는 매개변수의 제곱을 반환
int square(int y) // y is a copy of the argument to the function, y는 함수에 대한 인수의 복사본
{
    return y * y; // returns the square of y as an int,  y의 제곱을 int로 반환
}
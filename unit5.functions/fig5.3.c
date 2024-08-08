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
// square �Լ� ���Ǵ� �Ű������� ������ ��ȯ
int square(int y) // y is a copy of the argument to the function, y�� �Լ��� ���� �μ��� ���纻
{
    return y * y; // returns the square of y as an int,  y�� ������ int�� ��ȯ
}
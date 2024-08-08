// Fig 5.6: fig 05_05.c
// Demonstrating the function call stack
// and stack frames using a function square.
#include <stdio.h>

int square(int); // �Լ� square �� ������Ÿ��

int main()
{
    int a = 10; // value to square (local automatic variable in main) main �� ���� �ڵ� ����
    
    printf("%d squared %d\n", a, square(a)); //display a squared, a�� ���� ǥ��
}

// returns the square of an integer
int square(int x) // x is a local variable
{
    return x * x; // calculated square and return result
}
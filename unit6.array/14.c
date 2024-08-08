/*
// in function tryToModifyArray ,array b in const, so it cannot be
// used to modify its array argument it the caller
// 함수 tryToModifyArray 에서 배열 b는 const 이므로 호출자의 배열 인수를 수정하는 데 사용할 수 없다
// 호출자의 배열 인수를 수정하는 데 사용할 수 없다.

void tryToModifyArray(const int b[])
{
    b[0] /= 2; // error
    b[1] /= 2; // error
    b[2] /= 2; //error
}
*/

// Fig. 6.15 : fig06_15.c
// Sorting an array's value into ascending order.
#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main(void)
{

    //initialize a
    int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };

    puts("Data items in original order");

    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    // bubble sort
    // loop to control number of passes
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        //loop to contrl number of comparisons per pass
        for (size_t i = 0; i < SIZE - 1; ++i) {

            //compare adjacent elements and swap them if first
            // element is greater than second element
            if (a[i] > a[i + 1]) {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }

    puts("\nData items in ascending order");

    // output sorted array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    puts("");
}
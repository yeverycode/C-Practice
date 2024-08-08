#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    /*int* numPtr;
    int num1 = 10;
    int num2 = 20;

    numPtr = &num1;
    printf("%d\n", *numPtr);

    numPtr = &num2;
    printf("%d\n", *numPtr); */

    int* numPtr1;
    int** numPtr2;
    int num1;
    
    scanf("%d", &num1);

    numPtr1 = &num1;
    numPtr2 = &numPtr1;

    printf("%d\n", **numPtr2);


    return 0;
}
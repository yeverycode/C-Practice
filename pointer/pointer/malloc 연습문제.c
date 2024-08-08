#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

    /*int* numPtr1 = malloc(sizeof(int));
    long long* numPtr2 = malloc(sizeof(long long));

    *numPtr1 = INT_MAX;
    *numPtr2 = LLONG_MAX;

    printf("%d %lld\n", *numPtr1, *numPtr2);

    free(numPtr1);
    free(numPtr2); */

    int num1, num2;
    int* numPtr1=malloc(sizeof(int));
    int* numPtr2 = malloc(sizeof(int));
    //memset(numPtr1, 0, sizeof(int));
    //memset(numPtr2, 0, sizeof(int));
    scanf("%d %d", &num1, &num2);

    *numPtr1 = num1;
    *numPtr2 = num2;

    printf("%d\n", *numPtr1 + *numPtr2);

    free(numPtr1);
    free(numPtr2);
    return 0;
}
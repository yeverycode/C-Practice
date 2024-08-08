// Fig. 5.13: fig05_13.c
// Randomizing the die-rolling program.
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    unsigned int seed; //number used to seed the random number generator 난수 생성기를 위한 시드로 사용되는 숫자

    printf("%s", "Enter seed: ");
    scanf("%u", &seed); //note %u for unsigned int

    srand(seed); //seed the random number generator

    // loop 10 times
    for (unsigned int i = 1; i <= 10; ++i) {
        // pick a random number from 1 to 6 and output it
        printf("%10d", 1 + (rand() % 6));

        //if counter is divisible by 5, begin a new line of output
        // 카운터가 5로 나누어 떨어지면 새로운 줄 시작
        if (i % 5 == 0) {
            puts("");
        }
    }
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char s1[10]; 
    char s2[10];
    int num1 = 283;

    sprintf(s1, "%d", num1);
    sprintf(s2, "0x%x",num1);
    printf("%s\n", s1);
    printf("%s\n", s2);

    char s3[10];
    char s4[20];
    float num2= 38.972340f;
    sprintf(s3, "%f", num2);
    sprintf(s4, "%e", num2);
    printf("%s\n", s3);
    printf("%s\n", s4);
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

    int num1 = 10;
    int num2 = 0;

    if (num1 && num1)
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    if (num1 || num2)
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    printf("%s\n", !num2 ? "Âü" : "°ÅÁş");

    // ½É»ç¹®Á¦
    int num3, num4;
    scanf("%d %d", &num3, &num4);

    if (num3 && num4)
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    if (num3 || num4)
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    if (!num3)
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    return 0;
}
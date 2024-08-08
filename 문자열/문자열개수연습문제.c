#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    char* s1 = "C Language";
    printf("%d\n", strlen(s1));

    char* c1 = "Pachelbel Canon";
    char* c2 = "Pachelbel Canon";
    int ret = strcmp(c1,c2);
    printf("%d\n", ret);

    char c3[30];
    scanf("%s", c3);

    printf("%d\n", strlen(c3));

    char c4[30];
    char c5[30];

    scanf("%s %s", c4, c5);
    printf("%d\n", strcmp(c4, c5));
    return 0;
}
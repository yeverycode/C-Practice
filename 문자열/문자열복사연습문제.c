#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    /*char* s1 = "C Language";
    char s2[20];

    strcpy(s2, s1);
    printf("%s\n", s2);

    char* s3 = "The Little Prince";
    char* s4 = malloc(sizeof(char) * 20);

    strcpy(s4, s3);
    printf("%s\n", s4);

    free(s4);

    char s5[20] = " 9th Symphony";
    char s6[40] = "Beethoven";

    strcat(s6, s5);
    printf("%s\n", s6); 

    char* s1 = " Wonderland";
    char* s2 = malloc(sizeof(char) * 30);

    strcpy(s2, "Alice in");
    strcat(s2, s1);
    
    printf("%s\n", s2);
    free(s2); */

    /*char s1[31];
    char s2[31];

    scanf("%s", s1);
    strcpy(s2, s1);

    printf("%s\n", s1);
    printf("%s\n", s2); */

    char s1[40];
    scanf("%s", s1);
    strcat(s1, "th");

    printf("%s\n", s1);
    return 0;

}
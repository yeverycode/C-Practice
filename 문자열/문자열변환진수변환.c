#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

    /*char* s1 = "20972";
    int num1;
    num1= atoi(s1);
    printf("%d", num1);

    char *s1= "0x1facefee";
    int num1;
    num1 = strtol(s1, NULL, 16);
    printf("0x%X\n", num1); 

    char* s1 = "97.527824";
    float num1;

    num1 = atof(s1);
    printf("%f\n", num1);

    char* s1 = "29.977213 4528.112305";
    float num1;
    float num2;
    char* end;

    num1 = strtof(s1, &end);
    num2 = strtof(end, NULL);

    printf("%f\n", num1);
    printf("%f\n", num2); 

    char s1[40];
    
    float num1 = 98.415237f;
    int num2 = 0x3fce1920;
    sprintf(s1, "%f 0x%x\n", num1, num2);
    printf("%s\n", s1);

    char s1[31];
    int num1;
    int num2;
    float num3;
    char* end;

    scanf("%[^\n]", s1);

    num1= strtol(s1,&end,16);
    num2 = strtol(end, &end, 10);
    num3 = strtof(end, NULL);

    printf("0x%x\n", num1);
    printf("%d\n", num2);
    printf("%f\n", num3);*/

    char s1[10];
    char s2[20];
    int num1;
    float num2;

    scanf("%d %f", &num1, &num2);

    sprintf(s1, "%d", num1);
    sprintf(s2, "%f", num2);

    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}
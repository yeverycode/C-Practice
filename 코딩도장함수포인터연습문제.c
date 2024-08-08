/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hello()
{
    printf("Hello, ");
}

void numberToString(int n, char* buffer)
{
    sprintf(buffer, "%d", n);
}

int main()
{
    char (*fp1)();
    char (*fp2)(int , char *);
    char buffer[20];

    fp1 = hello;
    fp2 = numberToString;

    fp1();
    fp2(100, buffer);
    printf("%s\n", buffer);

    return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int add(int* a, int* b)
{
    return *a + *b;
}

int sub(int* a, int* b)
{
    return *a - *b;
}

int mul(int* a, int* b)
{
    return *a * *b;
}

int div(int* a, int* b)
{
    return *a / *b;
}

int main()
{
    char funcName[10];
    int num1, num2;

    scanf("%s %d %d", funcName, &num1, &num2);

    int (*fp)(int*, int*);

    if (strcmp(funcName,"add")==0) {
        fp = add;
    }
    else if (strcmp(funcName, "sub") == 0) {
        fp = sub;
    }
    else if (strcmp(funcName, "mul") == 0) {
        fp = mul;
    }
    else {
        fp = div;
    }

    printf("%d\n", fp(&num1, &num2));

    return 0;
}
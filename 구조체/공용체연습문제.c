/*#include <stdio.h>

union Data {
    int num1;
    char c1;
};

int main()
{
    union Data d1;

    d1.num1 = 0x5678;

    printf("0x%x 0x%x\n", d1.num1, d1.c1);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

union Data {
    short num1;
    int num2;
};

int main()
{
    union Data* d1=malloc(sizeof(union Data));

    d1->num2 = 1;

    printf("%d %d\n", d1->num1, d1->num2);

    free(d1);

    return 0;
}

#include <stdio.h>

union Data {
    char c1;
    int num1;
};

int main()
{
    union Data d1;

    d1.num1 = 0x1111;

    printf("0x%x %d\n", d1.c1, sizeof(d1));

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

union Data {
    short num1;
    int num2;
};

int main()
{
    union Data *d1=malloc(sizeof(union Data));
    d1->num2 = 0x11111111;

        printf("0x%x 0x%x\n", d1->num1, d1->num2);

    free(d1);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char s1[20];
    sprintf(s1, "%dth %s", 9, "Symphony");
    printf("%s\n", s1);

    char s2[20];
    sprintf(s2, "%d %d %d %c %d", 10, 20, 30, 'c', 99);
    printf("%s", s2);

    int number;
    char name[31], result[40];
    scanf("%d %s", &number, name);

    switch (number) {
    case 1:
        sprintf(result, "%dst %s\n", number, name);
        break;
    case 2:
        sprintf(result, "%dnd %s\n", number, name);
        break;
    case 3:
        sprintf(result, "%drd %s\n", number, name);
        break;
    default:
        sprintf(result, "%dth %s\n", number, name);
        break;
    }
    printf("%s\n", result);

    return 0;
}
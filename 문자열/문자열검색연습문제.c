#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    /*char s1[30] = "Alice in Wonderland";

    char* ptr = strchr(s1, 'n');

    while (ptr!=NULL)
    {
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'n');
    }

    char s1[30] = "The Little Prince";

    char* ptr = strstr(s1, "i");
    printf("%s\n", ptr); */

    char s1[1001];
    char* ptr;
    scanf("%[^\n]s", s1);
    ptr = strchr(s1, ' ');

    int count = 0;
    
    while (ptr != NULL) {
        count++;
        ptr = strchr(ptr + 1, ' ');
        
    }

    printf("%d\n", count);

    return 0;
}
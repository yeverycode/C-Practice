#include <stdio.h>
int main() {
    //char* s1 = "Beetoven 9th symphony";
    //printf("%s\n", s1);
    
    char s2[30] = "Beetoven 9th symphony";
    printf("%c\n", s2[10]);

    char* s1 = "Beetoven\n9th\nSymphony";
    printf("%s\n", s1);



    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main() {

    /*bool b1 = true;
    bool b2 = false;

    if (b1 && !b2)
        printf("��\n");
    else
        printf("����\n");

    printf("%s\n", b2 || b2 ? "��" : "����");  */

    bool b1 = false;
    bool b2 = true;

    if (b1 != true)
        printf("��\n");
    else
        printf("����\n");

    printf("%s\n", b2 == false ? "��" : "����");

    return 0;
}
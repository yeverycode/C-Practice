#include <stdio.h>
#include <stdbool.h> // bool, true, false �� ���ǵ� �������
int main() {
    bool b1 = true;

    if (b1 == true)
        printf("��\n");
    else
        printf("����\n");

    printf("int�� ũ��: %d\n", sizeof(int));
    printf("bool�� ũ��: %d\n", sizeof(bool));

    printf("%d\n", true && true);
    printf("%d\n", true && false);
    printf("%d\n", false && false);
    printf("%d\n", false && false);

    printf("%d\n", true || true);
    printf("%d\n", true || false);
    printf("%d\n", false || true);
    printf("%d\n", false || false); 

    bool b2 = false;
    printf(b1 ? "true" : "false"); //b1�� true, false ���
    printf("\n");
    printf(b2 ? "true" : "false");
    printf("\n");

    if (true)
        printf("��\n");
    else
        printf("����\n");

    if (false)
        printf("��\n");
    return 0;
}
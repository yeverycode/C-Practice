#include <stdio.h>
#include <stdbool.h> // bool, true, false 가 정의된 헤더파일
int main() {
    bool b1 = true;

    if (b1 == true)
        printf("참\n");
    else
        printf("거짓\n");

    printf("int의 크기: %d\n", sizeof(int));
    printf("bool의 크기: %d\n", sizeof(bool));

    printf("%d\n", true && true);
    printf("%d\n", true && false);
    printf("%d\n", false && false);
    printf("%d\n", false && false);

    printf("%d\n", true || true);
    printf("%d\n", true || false);
    printf("%d\n", false || true);
    printf("%d\n", false || false); 

    bool b2 = false;
    printf(b1 ? "true" : "false"); //b1이 true, false 출력
    printf("\n");
    printf(b2 ? "true" : "false");
    printf("\n");

    if (true)
        printf("참\n");
    else
        printf("거짓\n");

    if (false)
        printf("참\n");
    return 0;
}
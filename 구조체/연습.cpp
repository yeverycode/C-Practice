#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 80
/*int main() {

    int i = 5;
    int j = 7;
    int k = 4;
    int m = -2;

    printf("%d\n", i >= 5 && j < 4);
    printf("%d\n", !m && k > m);
    printf("%d\n", !k || m);
    printf("%d\n", k - m < j || 5 - j >= k);
    printf("%d\n", j + m <= i && !0);

    return 0;
}

int main() {
    int y;
    int x = 1;
    int total = 0;

    while (x <= 5) {
        y = 2 * x;
        total += y;
        ++x;
    }
    printf("%d\n", total);
}*/

size_t mystery2(const char* s); 
int main(void) {
    char string[SIZE];
    puts("Enter a string: ");
    scanf("%79s", string);
    printf("%zu\n", mystery2(string));  // %d 대신 %zu 사용
}


size_t mystery2(const char* s) {
    size_t x = 0;  // 초기화 필요
    for (x = 0; *s != '\0'; ++s) {
        ++x;
    }
    return x;
}
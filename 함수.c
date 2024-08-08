#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*void multi();

void multi(int x) {
    int result = x * x;
    printf("%d\n", result);
}

int main() {
    int x;
    scanf("%d", &x);

    multi(x);

    return 0;
}
*/

/*void printStar(int count);

void printStar(int count) {
    int i;
    for (i = 0; i < count; i++) {
        printf("* ");
    }
    puts("");
}

int main() {
    printStar(100);
    printStar(3);
    return 0;
}*/

void print(int x, char y);
void printprint(int x, char y);

void print(int x, char y) {
    
    for (int i = 0; i < x; i++) {
        printf("%c", y);
    }
}

void printprint(int x, char y) //  지역번수의 이름은 겹쳐도 영향을 미치지 않는다.
{
    for (int i = 0; i < x; i++) {
        printf("%c", y);
    }
}

int main() {
    print(4,'$');
    printprint(10,'^');
}
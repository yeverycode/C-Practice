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

void printprint(int x, char y) //  ���������� �̸��� ���ĵ� ������ ��ġ�� �ʴ´�.
{
    for (int i = 0; i < x; i++) {
        printf("%c", y);
    }
}

int main() {
    print(4,'$');
    printprint(10,'^');
}
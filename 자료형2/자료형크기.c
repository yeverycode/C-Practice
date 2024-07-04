// 자료형 크기 구하기
# include <stdio.h>
int main() {
    int num1 = 0;
    int size1, size2;

    size1 = sizeof num1; //변수 num1의 자료형 크기 size1=sizeof(num1) 도 가능.
    size2 = sizeof(int); //int 자료형의 크기

    printf("num1의 크기: %d\n", size1);
    printf("int의 크기: %d\n", size2);

    printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
        sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    // sizeof 로 char, short, int, long, long long 의 크기를 구한다.
    return 0;
}
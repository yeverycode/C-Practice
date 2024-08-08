// 자료형 크기가 아닌 최대최소값을 표현하기 위해서는 limits.h 를 사용해야한다.

#include <stdio.h>
#include <limits.h>

int main() {
    char num1 = CHAR_MIN; //CHAR 의 최소
    short num2 = SHRT_MIN; //short의 최소
    int num3 = INT_MIN; // int 의 최소
    long num4 = LONG_MIN; // long 의 최소
    long long num5 = LLONG_MIN; // long long 의 최소

    // char, short, int는 %d로 출력하고 long은 %ld, long long 은 %ld 로 출력
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    // main2 함수 호출
    main2();
    main3();
    return 0;
}

// 최댓값을 넘어서는 경우
int main2() {
    char num1 = CHAR_MAX + 1; // char 의 최댓값보다 큰 수를 할당. 오버플로우
    short num2 = SHRT_MAX + 1; // short
    int num3 = INT_MIN + 1; // int의 최댓값보다 큰 수를 할당. 오버플로우
    long long num4 = LLONG_MAX + 1; //long long의 최댓값보다 큰 수를 할당, 오버플로우

    // char, short, int는 %d로 출력하고 long long 은 %lld로 출력
    // 부호 있는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값부터 다시 시작한다.
    printf("%d %d %d %lld\n", num1, num2, num3, num4);

    unsigned char num5 = UCHAR_MAX + 1; // unsigned char 의 최댓값보다 큰 수 할당. 오버플로우
    unsigned short num6 = USHRT_MAX + 1; // unsigned char 의 최댓값보다 큰 수 할당. 오버플로우
    unsigned int num7 = UINT_MAX + 1; // unsigned int의 최댓값보다 큰 수 할당. 오버플로우
    unsigned long long num8 = ULLONG_MAX + 1;  // unsigned long long 의 최댓값보다 큰 수 할당. 오버플로우

    // unsigned char, unsigned short, unsigned int는 %u로 출력
    // unsigned long long 은 % llu로 출력
    // 부호 없는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값 0부터 다시 시작

    printf("%u %u %u %llu\n", num5, num6, num7, num8); // 0 0 0 0

    return 0;
}

// 최솟값보다 작아지는 경우, 언더플로우
int main3() {
    char num1 = CHAR_MIN - 1; //char의 최솟값보다 작은 수 할당, 언더 플로우
    short num2 = SHRT_MIN - 1; // short 의 최솟값보다 작은 수 할당, 언더 플로우
    int num3 = INT_MIN - 1; // int의 최솟값보다 작은 수를 할당, 언더플로우 할당
    long long num4 = LLONG_MIN - 1; // long long 의 최솟값보다 작은 수를 할당

    //chart, shor, int는 %d로 출력하고 long long 은 %lld로 출력
    // 부호 있는 정수에서 최솟값보다 작아지면 최댓값부터 다시 시작
    printf("%d %d %d %lld\n", num1, num2, num3, num4);

    unsigned char num5 = 0 - 1; // unsigned char의 최솟값보다 작은 수 할당, 언더플로우
    unsigned short num6 = 0 - 1; // unsigned short의 최솟값보다 작은 수 할당, 언더플로우
    unsigned int num7 = 0; //unsigned int의 최솟값보다 작은 수 할당, 언더플로우
    unsigned long long num8 = 0 - 1; //unsigned long long의 최솟값보다 작은 수 할당, 언더플로우

    // unsigned char, unsigned short, unsigned int는 %u로 출력
    // unsigned long long 은 % llu로 출력
    // 부호 없는 정수에서 최솟값보다 작아지면 최댓값부터 다시 시작
    printf("%u %u %u %llu\n", num5, num6, num7, num8);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand, rand 함수가 선언된 헤더 파일
#include <time.h>

int main() {
    // hello world 100번 출력하기

    int i = 0;
    while (i<100) {
        printf("Hello,world!\n");
        i++;
    }
    
    //초기값 1부터 시작
    int j = 1;
    while (j <= 100) {
        printf("Hello,world!\n");
        j++;
    }

    // 초기값을 감소시키기
    int k = 100;
    while (k > 0) {
        printf("Hello, world!\n");
        k--;
    }

    //count 를 입력받기
    int count;
    scanf("%d", &count);
    while (count > 0) {
        printf("Hi\n");
        count--;
    }

    // 반복횟수가 주어지지 않은 경우
    // 무작위의 수 중에서 3이 나오면 반복을 끝내기

    srand(time(NULL)); // 현재 시간값으로 시드 설정
    int num = 0;
    while (num != 3) //3이 아닐 때 반복 
    {
        num = rand() % 10; // rand 함수를 사용하여 무작위로 정수를 생성한 뒤 10 미만의 수로 만든다.

        printf("%d\n", num);
    }
    return 0;
}
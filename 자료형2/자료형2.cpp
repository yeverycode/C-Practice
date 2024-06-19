// 오버플로우와 언더플로우
#include <stdio.h>
int main() {
    char num1 = 128; // char에 저장할 수 있는 최댓값 127보다 더 큰 수를 할당. 오버플로우
    unsigned char num2 = 256; //unsigned char에 저장할 수 있는 최댓값 255보다 큰수를 할당. 오버플로우

    printf("%d %u\n", num1, num2);

    return 0;
}
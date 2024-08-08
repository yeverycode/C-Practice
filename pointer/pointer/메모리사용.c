#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 정의된 헤더 파일
#include <string.h>

int main() {

    /*int num1 = 20;
    int* Ptr1;

    Ptr1 = &num1;

    int* Ptr2;

    Ptr2 = malloc(sizeof(int));

    printf("%p\n", Ptr1);
    printf("%p\n", Ptr2);

    free(Ptr2); // 동적으로 할당한 메모리 해제 */

    int* numPtr;
    numPtr = malloc(sizeof(int)); // int의 크기 4바이트 만큼 동적 메모리 할당

    *numPtr = 10; // 포인터 역참조
    printf("%d\n", *numPtr); // 포인터를 역참조하여 메모리에 저장된 값을 출력

    free(numPtr); // 동적 메모리 해제

    long long* numPtr2 = malloc(sizeof(long long)); // long long 크기 8바이트 만큼 동적 메모리 할당

    memset(numPtr2, 0x27, 8); // numPtr 이 가리키는 메모리를 8바이트만큼 0x27 로 설정
    printf("0x%llx\n", *numPtr2);
    free(numPtr2);
    return 0;
}
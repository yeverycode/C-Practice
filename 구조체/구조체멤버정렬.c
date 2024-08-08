#include <stdio.h>
#include <stddef.h>   // offsetof 매크로가 정의된 헤더 파일

struct PacketHeader {
    char flags; // 1바이트
    int seq; // 4바이트
};

int main() {

    struct PacketHeader header;

    printf("%d\n", sizeof(header.flags));

    printf("%d\n", sizeof(header.seq)); 

    printf("%d\n", sizeof(header)); // 구조체 전체 크기는 8바이트

    printf("%d\n", sizeof(struct PacketHeader));

    printf("%d\n", offsetof(struct PacketHeader, flags));    // 0
    printf("%d\n", offsetof(struct PacketHeader, seq));      // 4

    return 0;
}
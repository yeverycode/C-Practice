#include <stdio.h>
#include <stddef.h>   // offsetof ��ũ�ΰ� ���ǵ� ��� ����

struct PacketHeader {
    char flags; // 1����Ʈ
    int seq; // 4����Ʈ
};

int main() {

    struct PacketHeader header;

    printf("%d\n", sizeof(header.flags));

    printf("%d\n", sizeof(header.seq)); 

    printf("%d\n", sizeof(header)); // ����ü ��ü ũ��� 8����Ʈ

    printf("%d\n", sizeof(struct PacketHeader));

    printf("%d\n", offsetof(struct PacketHeader, flags));    // 0
    printf("%d\n", offsetof(struct PacketHeader, seq));      // 4

    return 0;
}
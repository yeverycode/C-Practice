/*#include <stdio.h>

struct CompressHeader {
    char flags;
    int version;
};

int main()
{
    struct CompressHeader header;

    printf("%d\n", sizeof(header));

    return 0;
}

#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    short length;
    int seq;
};
#pragma pack(pop)

int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}

#include <stdio.h>

struct EncryptionHeader {
    char flags;
    int a;
    int b;
};

int main()
{
    struct EncryptionHeader header;

    printf("%d\n", sizeof(header));

    return 0;
}

#include <stdio.h>

struct Packet {
    char c1, c2, c3;
};
int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}*/

#include <stdio.h>
#pragma pack(push, 1)
struct Packet {
    short c1;
    char c2;
};
#pragma pack(pop)
int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}
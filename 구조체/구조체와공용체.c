/*#include <stdio.h>

struct Phone {    // �޴���ȭ ����ü
    int areacode;                 // ������ȣ
    unsigned long long number;    // �޴���ȭ ��ȣ
};

struct Person {    // ��� ����ü
    char name[20];         // �̸�
    int age;               // ����
    struct Phone phone;    // �޴���ȭ. ����ü�� ����� ����
};

int main()
{
    struct Person p1;

    p1.phone.areacode = 82;          // ����.���.��� ������ �����Ͽ� �� �Ҵ�
    p1.phone.number = 3045671234;    // ����.���.��� ������ �����Ͽ� �� �Ҵ�

    printf("%d %llu\n", p1.phone.areacode, p1.phone.number);    // 82 3045671234

    return 0;
}

#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ����� ��� ����

struct Phone {
    int areacode; // ������ȣ
    unsigned long long number;
};

struct Person { // ��� ����ü
    char name[20];
    int age;
    struct Phone phone; // ����ü�� ����� ������.
};

int main() {
    struct Person* p1 = malloc(sizeof(struct Person));
    p1->phone.areacode = 82;
    p1->phone.number= 3045671234;    // ������->���.��� ������ �����Ͽ� �� �Ҵ�

    printf("%d %llu\n", p1->phone.areacode, p1->phone.number);

    free(p1); // ���� �޸� ����

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

struct Phone {    // �޴���ȭ ����ü
    int areacode;                 // ������ȣ
    unsigned long long number;    // �޴���ȭ ��ȣ
};

struct Person {    // ��� ����ü
    char name[20];          // �̸�
    int age;                // ����
    struct Phone* phone;    // �޴���ȭ. ����ü ������ ����
};

int main()
{
    struct Person* p1 = malloc(sizeof(struct Person));    // �ٱ� ����ü�� �����Ϳ� �޸� �Ҵ�
    p1->phone = malloc(sizeof(struct Phone));             // ��� �����Ϳ� �޸� �Ҵ�

    p1->phone->areacode = 82;          // ������->������->��� ������ �����Ͽ� �� �Ҵ�
    p1->phone->number = 3045671234;    // ������->������->��� ������ �����Ͽ� �� �Ҵ�

    printf("%d %llu\n", p1->phone->areacode, p1->phone->number);    // 82 3045671234

    free(p1->phone);    // ����ü ����� �޸𸮸� ���� ����
    free(p1);           // ����ü �޸� ����

    return 0;
}
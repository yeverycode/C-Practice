#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ���ǵ� ��� ����
#include <string.h>

int main() {

    /*int num1 = 20;
    int* Ptr1;

    Ptr1 = &num1;

    int* Ptr2;

    Ptr2 = malloc(sizeof(int));

    printf("%p\n", Ptr1);
    printf("%p\n", Ptr2);

    free(Ptr2); // �������� �Ҵ��� �޸� ���� */

    int* numPtr;
    numPtr = malloc(sizeof(int)); // int�� ũ�� 4����Ʈ ��ŭ ���� �޸� �Ҵ�

    *numPtr = 10; // ������ ������
    printf("%d\n", *numPtr); // �����͸� �������Ͽ� �޸𸮿� ����� ���� ���

    free(numPtr); // ���� �޸� ����

    long long* numPtr2 = malloc(sizeof(long long)); // long long ũ�� 8����Ʈ ��ŭ ���� �޸� �Ҵ�

    memset(numPtr2, 0x27, 8); // numPtr �� ����Ű�� �޸𸮸� 8����Ʈ��ŭ 0x27 �� ����
    printf("0x%llx\n", *numPtr2);
    free(numPtr2);
    return 0;
}
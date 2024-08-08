/*#include <stdio.h>

int* ten() // int �����͸� ��ȯ�ϴ� ten �Լ� ����
{
    int num1 = 10; //num1�� �Լ� ten �� ������ �����

    return &num1;    // �Լ����� ���� ������ �ּҸ� ��ȯ�ϴ� ���� �߸��� ���
} //        �� warning C4172: ���� ���� �Ǵ� �ӽ� ������ �ּҸ� ��ȯ�ϰ� �ֽ��ϴ�.

int main() {
    int* numPtr;
    numPtr = ten(); // �Լ��� ȣ���ϰ� ��ȯ���� numPtr�� ����
    printf("%d\n", *numPtr);    // 10: ���� ������ ������ �̹� ����� ������ ����ϰ� ����

    return 0;
*/

#include <stdio.h>
#include <stdlib.h> // malloc,free �Լ��� ����� ��� ����

int* ten() //int �����͸� ��ȯ�ϴ� ten �Լ� ����
{
    int* numPtr = malloc(sizeof(int)); //int ũ�⸸ŭ ���� �޸� �Ҵ�
    *numPtr = 10;
    return numPtr; // ������ ��ȯ, malloc�� �޸𸮸� �Ҵ��ϸ� �Լ��� ������ ������� �ʴ´�.
}

int main() {
    int* numPtr;
    numPtr = ten(); // �Լ��� ȣ���ϰ� ��ȯ���� ����
    printf("%d\n", *numPtr); // �޸� �������� ����
    free(numPtr);    // �ٸ� �Լ����� �Ҵ��� �޸𸮶� �ݵ�� ����

    return 0;
}
/*#include <stdio.h>

int one()    // ��ȯ���� int���� one �Լ� ����
{
    return 1;    // 1�� ��ȯ
}

int main()
{
    int num1;

    num1 = one();    // int���� ��ȯ�����Ƿ� int�� ������ ����

    printf("%d\n", num1);    // 1

    return 0;
}*/

#include <stdio.h>
#include <stdbool.h> // bool, true, false �� ���ǵ� ��� ����
float realNumber() {
    return 1.234567f;    // 1.234567: float���� ��ȯ
}

bool truth() {
    return true;    // true: bool���� ��ȯ
}

int main() {
    float num1;
    bool b1;

    num1 = realNumber(); //float���� ��ȯ�����Ƿ� float�� ������ ����
    b1 = truth();

    printf("%f\n", num1);
    printf("%d\n", b1);
}
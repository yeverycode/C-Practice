#include <stdio.h>
int main() {

    // const �ڷ��� ����̸�= ��;
    const int con1 = 1; // ���. ����� ���ÿ� �ʱ�ȭ
    const float con2 = 0.1f; // ���. ����� ���ÿ� �ʱ�ȭ
    const char con3 = 'a'; // ���. ����� ���ÿ� �ʱ�ȭ.

    // con1 = 2; // ����� ���� �Ҵ��ϸ� ������ ������ �߻��Ѵ�.
    printf("%d %f %c", con1, con2, con3); 

    
    return 0;
}
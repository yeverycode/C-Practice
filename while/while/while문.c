#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand, rand �Լ��� ����� ��� ����
#include <time.h>

int main() {
    // hello world 100�� ����ϱ�

    int i = 0;
    while (i<100) {
        printf("Hello,world!\n");
        i++;
    }
    
    //�ʱⰪ 1���� ����
    int j = 1;
    while (j <= 100) {
        printf("Hello,world!\n");
        j++;
    }

    // �ʱⰪ�� ���ҽ�Ű��
    int k = 100;
    while (k > 0) {
        printf("Hello, world!\n");
        k--;
    }

    //count �� �Է¹ޱ�
    int count;
    scanf("%d", &count);
    while (count > 0) {
        printf("Hi\n");
        count--;
    }

    // �ݺ�Ƚ���� �־����� ���� ���
    // �������� �� �߿��� 3�� ������ �ݺ��� ������

    srand(time(NULL)); // ���� �ð������� �õ� ����
    int num = 0;
    while (num != 3) //3�� �ƴ� �� �ݺ� 
    {
        num = rand() % 10; // rand �Լ��� ����Ͽ� �������� ������ ������ �� 10 �̸��� ���� �����.

        printf("%d\n", num);
    }
    return 0;
}
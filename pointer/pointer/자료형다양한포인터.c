#include <stdio.h>
#include <stdlib.h>

int main() {

    /*long long* numPtr1; // long long �� ������
    float* numPtr2; 
    char *cPtr1; // char �� ������

    long long num1 = 1 ;
    float num2 = 3.5f;
    char c1 = 'a';

    numPtr1 = &num1;
    numPtr2 = &num2;
    cPtr1 = &c1;

    printf("%lld\n", *numPtr1);
    printf("%f\n", *numPtr2);
    printf("%c\n", *cPtr1); */

    int num1 = 10;
    char c1 = 'a';
    int* numPtr1 = &num1;
    char* cPtr1= &c1;

    void* ptr; // void �� ������ ����

    //������ �ڷ����� �޶� ������ ��� �߻����� �ʴ� ���
    ptr = numPtr1; // void �����Ϳ� int ������ ����
    ptr = cPtr1; // void �����Ϳ� char ������ ����

    //������ �ڷ����� �޶� ������ ��� �߻����� �ʴ� ���
    //numPtr1 = ptr; // int �����Ϳ� void ������ ����
    //cPtr1 = ptr; // char  �����Ϳ� void ������ ����

    int** numPtr2;
    numPtr2 = &numPtr1;
    printf("%d\n", **numPtr2);

    // printf("%d\n", *ptr); // void �� �������� �ȵȴ�.
    return 0;
}
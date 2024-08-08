#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*char* s1 = "283"; //283�� ���ڿ�
    int num1;

    num1 = atoi(s1); // ���ڿ��� ������ ��ȯ�Ͽ� num1�� �Ҵ�
    printf("%d\n", num1); // 283

    char *s2= "0xaf10";    // "0xaf10"�� ���ڿ�
    int num2;
    num2 = strtol(s2, NULL, 16); // 16���� ǥ��� ���ڿ��� ������ ��ȯ

    printf("%x %d\n", num2, num2);

    char *s2= "0xaf10 42 0x27C 9952";
    int num1, num2, num3, num4;
    char* end; // ���� ������ ���κ��� �����ϱ� ���� ������
    num1 = strtol(s2, &end, 16); //16�������� ǥ��� ���ڿ��� ������ ��ȯ
    num2 = strtol(end, &end, 10); 
    num3 = strtol(end, &end, 16); 
    num4 = strtol(end, NULL, 10);

    printf("%x\n", num1);
    printf("%d\n", num2);
    printf("%X\n", num3);
    printf("%d\n", num4); 
    
    char *s1= "35.283672";
    float num1;
    num1 = atof(s1);
    printf("%f\n", num1);

    char* s2 = "3.e5"; 
    float num2;
    num2 = atof(s2);
    printf("%e %f\n", num2, num2); */

    char* s1 = "35.283672 3.e5 9.281772 7.e-5";    // "35.283672 3.e5f 9.2817721 7.e-5f"�� ���ڿ�
    float num1,num2,num3,num4;
    char* end;    // ���� ������ �� �κ��� �����ϱ� ���� ������

    num1 = strtof(s1, &end);     // ���ڿ��� �Ǽ��� ��ȯ
    num2 = strtof(end, &end);    // ���ڿ��� �Ǽ��� ��ȯ
    num3 = strtof(end, &end);    // ���ڿ��� �Ǽ��� ��ȯ
    num4 = strtof(end, NULL);    // ���ڿ��� �Ǽ��� ��ȯ

    printf("%f\n", num1);    // 35.283672
    printf("%e\n", num2);    // 3.000000e+05
    printf("%f\n", num3);    // 9.281772
    printf("%e\n", num4);    // 7.000000e-05

    return 0;
}
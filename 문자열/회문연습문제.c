#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
     long long num1;
     char text[30];

     printf("������ �Է��ϼ���: ");
     scanf("%lld", &num1);

     sprintf(text, "''d", num1);
     int length;
     bool isPalindrome = true;

     length = strlen(text);

     int begin = 0;
     int end = length - 1;
     while (begin < end)
     {
         if (text[begin] != text[end])
         {
             isPalindrome = false;
             break;
         }

         begin++;
         end--;
     }

     printf("%d\n", isPalindrome);

     char text[30];
     int length;
     int n = 4;

     scanf("%s", text);

     length = strlen(text);
     if (length<=3)
     {
         printf("wrong\n");
     }
     else
     {
         for (int i = 0; i<length-n ; i++)
         {
             for (int j = 0; j<n ; j++)
                 printf("%c", text[i + j]);

             printf("\n");
         }
     } 
    char Arr[31];
    char finalArr[31];
    int j = 0;
    bool istrue = true;

    // ������ �����Ͽ� ���ڿ� �Է¹ޱ�
    scanf("%[^\n]s", Arr);

    // ���� ���� �� �ҹ��ڷ� ��ȯ (�ҹ��� ��ȯ �κ� ����)
    for (int i = 0; i < strlen(Arr); i++) {
        if (Arr[i] != ' ') {
            finalArr[j] = Arr[i];  // �ҹ��ڷ� ��ȯ���� ����
            j++;
        }
    }
    finalArr[j] = '\0';  // null ���ڷ� ���ڿ� ����

    int length = strlen(finalArr);

    // ȸ�� �˻�
    for (int i = 0; i < length / 2; i++) {
        // �빮�ڸ� �ҹ��ڷ� ��ȯ���� �ʰ� ���� ��
        if (finalArr[i] != finalArr[length - 1 - i]) {
            istrue = false;
            break;
        }
    }

    // ��� ���
    if (istrue) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}

    char Arr[10];
    int count;
    scanf("%d %s", &count, Arr);
    char* ptr = Arr;
    int length = strlen(Arr);

    if (length < count) {
        printf("wrong\n");
    }

    for (int i = 0; i < length - count + 1; i++) {
        for (int j = 0; j < count; j++) {
            printf("%c", ptr[i+j]);
        }
        printf("\n");
    } 
    return 0;
}
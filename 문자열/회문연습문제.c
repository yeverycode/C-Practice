#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
     long long num1;
     char text[30];

     printf("정수를 입력하세요: ");
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

    // 공백을 포함하여 문자열 입력받기
    scanf("%[^\n]s", Arr);

    // 공백 제거 및 소문자로 변환 (소문자 변환 부분 생략)
    for (int i = 0; i < strlen(Arr); i++) {
        if (Arr[i] != ' ') {
            finalArr[j] = Arr[i];  // 소문자로 변환하지 않음
            j++;
        }
    }
    finalArr[j] = '\0';  // null 문자로 문자열 종료

    int length = strlen(finalArr);

    // 회문 검사
    for (int i = 0; i < length / 2; i++) {
        // 대문자를 소문자로 변환하지 않고 직접 비교
        if (finalArr[i] != finalArr[length - 1 - i]) {
            istrue = false;
            break;
        }
    }

    // 결과 출력
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
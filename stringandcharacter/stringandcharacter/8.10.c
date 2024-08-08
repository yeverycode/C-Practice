// Fig. 8.10: fig08_10.c
// Using functions fgets and putchar
#include <stdio.h>
#define SIZE 80

void reverse(const char* const sPtr); // prototype

int main(void)
{
    char sentence[SIZE]; // create char array

    puts("Enter a line of text:");

    // use fgets to read line of text
    // fgets 를 사용하여 텍스트의 한 줄을 읽는다.
    fgets(sentence, SIZE, stdin);

    printf("\n%s", "The line printed backward is:");
    reverse(sentence);
}

// 문자열의 문자를 재귀적으로 역순으로 출력한다.
// recursively outputs characters in string in reverse order
void reverse(const char* const sPtr)
{
    // if end of the string , 문자열의 끝일 경우
    if ('\0' == sPtr[0]) { // base case
        return;
    }
    else { // if not end of the string, 문자열의 끝이 아닐 경우
        reverse(&sPtr[1]); // recursion step, 재귀 단계
        putchar(sPtr[0]); // use putchar to display character
    }
}

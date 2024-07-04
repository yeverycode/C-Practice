#include <stdio.h>
int main() {
    printf("%c %d\n", 'a' + 1, 'a' + 1); // b와 98 출력. 
    printf("%c %d\n", 97 + 1, 97 + 1); // b와 98 출력
    // 'a' 와 97은 같기 때문이다.
    // 어떤 값이든 상관없이 0~255 사이의 아스키 코드이면 상관없다

    char c1 = 'a';
    printf("%c %d\n", c1 + 1, c1 + 1);

    char c2 = 'b';
    char lineFeed = '\n'; // 제어 문자 \n을 할당한다
    printf("%c%c%c%c", c1, lineFeed, c2, lineFeed); //제어문자도 %c로 출력할 수 있다.
    printf("%d 0x%x\n", lineFeed, lineFeed); // 10 0xa 제어 문자의 아스키코드 출력
    return 0;
}
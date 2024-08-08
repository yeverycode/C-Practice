#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // char *ptr : 주소를 저장하는 공간인 포인터에는 문자열 저장이 불가
    char str[255];

    printf("문자열 입력: ");
    // scanf에서 %s : 주소 위치부터 문자열을 저장한 후 널문자를 출력
    // 공백을 포함한 문자열을 받을 수 없다. , 동시에 여러개를 입력받는 함수이기 때문.
    //scanf("%s", str);

    gets_s(str, 255);
    // window 용 함수, 입력받을 곳의 주소, 최대 입력 허용 크기
    // gets_s(입력받을 곳의 주소, 최대 입력 허용 크기)

    // printf에서의 %s : 주소부터 null 문자 이전까지의 문자열을 출력
    //printf("%s", str);

    // 문자열을 입력받아서 대문자인 경우만 '*' 로 변환하는 코드
    int len = strlen(str);
    int cnt = 0;
    printf("%d\n", len);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' || str[i] <= 'Z') {
            str[i] = '*';
            cnt++;
        }
            
    }

    /* 무한루프 사용
    for (int i = 0;; i++) {

        if (str[i] == '\0') {
            break;
        } // 종료 조건 : 저장된 문자가 널문자인 경우 탈출

        if (str[i] >= 'A' || str[i] <= 'Z')
            str[i] = '*';
    } */

    printf("%s\n", str);
    return 0;
}
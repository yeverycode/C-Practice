#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // 자가 주택을 소유한 30대 남자인지 판별하는 프로그램

    /*int gender, age, isOwner; // 성별 남자 1, 여자 2. 주택 소유 여부 : 자가 1, 월세 0

    scanf("%d %d %d", &gender,&age, &isOwner);

    printf("안녕하세요.\n");
    printf("문을 연다.\n");

    if (gender == 2) {
        printf("안녕히계세요\n"); // 중복코드
        printf("문을 닫는다.\n");
        return 0; // 프로그램 종료
    }

    if (age < 30) {
        printf("안녕히계세요\n"); // 중복코드
        printf("문을 닫는다.\n");
        return 0; // 프로그램 종료
    }

    if (isOwner ==0) {
        printf("안녕히계세요\n"); // 중복코드
        printf("문을 닫는다.\n");
        return 0; // 프로그램 종료
    } */

    int gender, age, isOwner; // 성별 남자 1, 여자 2. 주택 소유 여부 : 자가 1, 월세 0

    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("안녕하세요.\n");
    printf("문을 연다.\n");

    if (gender == 2)
        goto EXIT;
    
    if (age < 30)
        goto EXIT;

    if (isOwner == 0)
        goto EXIT;

EXIT:
    printf("안녕히계세요\n"); // 에러처리 코드 한 번 사용
    printf("문을 닫는다.\n");

    return 0;
}
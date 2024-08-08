// Fig. 6.19: fig 06_19.c
// Binary search of a sorted array.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 15

// function prototypes
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high); 

void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

// function main begins program execution
int main(void)
{
    int a[SIZE]; // create array a
    
    //create data . 데이터 생성
    for (size_t i = 0; i < SIZE; ++i) {
        a[i] = 2 * i;
    }

    printf("%s", "Enter a number between 0 and 28: ");
    int key; //value to locate in array a
    scanf("%d", &key);

    printHeader();

    //search for key in array a . 배열 a 에서 키 검색
    size_t result = binarySearch(a, key, 0, SIZE-1);

    // display results . 결과 표시
    if (result != -1) {
        printf("\n%d found at index %d\n", key, result);
    }
    else {
        printf("\n%d not found\n", key);
    }
}

// function to perform binary search of an array
// 배열의 이진 검색을 수행하는 함수
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{

    // loop until low index is greater than high index
    // 낮은 인덱스가 높은 인덱스보다 클 때까지 반복
    while (low <= high) {

        // determine middle element of subarray being searched
        // 검색되는 하위 배열의 중간 요소를 결정
        size_t middle = (low + high) / 2;

        // display subarray used in this loop iteration
        // 이 루프에서 반복되는 하위 배열을 표시
        printRow(b, low, middle, high);

        // if searchKey matched middle element, return middle
        // searchKey 가 중간 요소와 일치하면 중간을 반환
        if (searchKey == b[middle]) {
            return middle;
        }

        // if searchKey is less than middle element, set new high
        // searchKey가 중간 요소보다 작으면 새 high 를 설정.
        else if (searchKey < b[middle]) {
            high = middle - 1; //search low end of array
        }

        // if searchKey is greater than middle element, set new low
        // searchKey가 중간 요소보다 크면 새 low 를 설정
        else {
            low = middle + 1; // search high end of array
        }
    } // ehd while

    return -1; // searchKey not found
}

// Print a header for the output
// 출력에 대한 헤더를 인쇄
void printHeader(void)
{
    puts("\nIndices:");

    // output column head. 출력 열의 머리글
    for (unsigned int i = 0; i < SIZE; ++i) {
        printf("%3u ", i);
    }

    puts(""); // start new line of output. 출력의 새 줄 시작

    // output line of- characters . 문자의 출력 줄
    for (unsigned int i = 1; i <= 4 * SIZE; ++i) {
        printf("%s", "-");
    }

    puts(""); // start new line of output
}

// Print one row of output showing the current part of the array being processed.
// 처리 중인 배열의 현재 부분을 보여주는 출력행을 인쇄
void printRow(const int b[], size_t low, size_t mid, size_t high)
{
    // loop through entire array
    for (size_t i = 0; i < SIZE; ++i) {

        // display spaces if outside current subarray range
        // 현재 하위 배열 범위 외부에 있으면 공백을 표시
        if (i<low || i>high) {
            printf("%s", "    ");
        }
        else if (i == mid) { //display middle element, 중간 요소를 표시
            printf("%3d*", b[i]); // mark middle balue, 중간 값 표시
        }
        else {// display other elements in subarray, 하위 배열의 다른 요소 표시
            printf("%3d ", b[i]);
        }
    }

    puts(""); // start new line of output
}
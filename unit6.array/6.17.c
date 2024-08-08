// Fig 6.18: fig06_18.c
// Linear search of an array. 배열의 선형 검색.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

//function prototype
size_t linearSearch(const int array[], int key, size_t size);

// function main begins program execution. 함수 main 은 프로그램 실행을 시작한다.
int main(void)
{
    int a[SIZE]; // create array a

    // create some data
    for (size_t x = 0; x < SIZE; ++x) {
        a[x] = 2 * x;
    }

    printf("Enter integer search key: ");
    int searchKey; // value to locate in array a. 배열 a에서 찾을 값
    scanf("%d", &searchKey);

    //attempt to locate searchKey in array a
    // 배열 a 에서 searchKey 를 찾으려고 시도
    size_t index = linearSearch(a, searchKey, SIZE);

    //display results
    if (index != -1) {
        printf("Found value at index %d\n", index);
    }
    else {
        puts("Value not found");
    }
}

// compare key to every element of array until the location is found
// or until the end of array is reached; return index of element
// if key is found or -1 if key is not found
// 배열의 모든 요소와 키를 비교하여 위치를 찾을 때까지 
// 또는 배열의 끝에 도달할 때까지, 요소의 인덱스를 반환
// 키가 발견되면 인덱스를 반환하고 키가 발견되지 않으면 -1을 반환
size_t linearSearch(const int array[], int key, size_t size)
{
    // loop through array
    for (size_t n = 0; n < size; ++n) {

        if (array[n] == key) {
            return n; // return location of key . 키의 위치를 반환
        }
    }

    return -1; // key not found . 키를 찾을 수 없다.
}
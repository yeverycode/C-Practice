// Fig. 6.11: fig06_11.c
// Static arrays are initialized to zero if not explicitly initialized.
// ��������� �ʱ�ȭ���� ������ ���� �迭�� 0���� �ʱ�ȭ�ȴ�.
#include <stdio.h>

void staticArrayInit(void); //function prototype
void automaticArrayInit(void); //function prototype

//function main begins program execution �Լ� main �� ���α׷� ������ ����
int main(void)
{
	puts("First call to each function:");
	staticArrayInit();
	automaticArrayInit();

	puts("\n\nSecond call to each function:");
	staticArrayInit();
	automaticArrayInit();
}

// function to demonstrate a static local array. ���� ���� �迭�� �����ִ� �Լ�
void staticArrayInit(void)
{
	// initializes elements to 0 before the function is called
	// �Լ��� ȣ��Ǳ� ���� ��Ҹ� 0���� �ʱ�ȭ
	static int array1[3];

	puts("\nValues on entering staticArrayinit:");

	//output contents of array1 : array1�� ���� ���
	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%u]=%d ", i, array1[i]);
	}

	puts("\nValues on exiting staticArrayInt:");

	//modify and output contents of array1
	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%u]=%d ", i, array1[i] += 5);
	}
}

// function to demonstarate an automatic local array
void automaticArrayInit(void)
{
	// initializes elements each time function is called
	int array2[3] = { 1,2,3 };

	puts("\n\nValues on entering automaticArrayInit:");

	//output contents of array2
	for (size_t i = 0; i <= 2; ++i) {
		printf("array2[%u]=%d ", i, array2[i]);
	}
	puts("\nValues on exiting automaticArrayInit:");

	//modify and output contents of array2
	for (size_t i = 0; i <= 2; ++i) {
		printf("array2[%u]= %d  ", i, array2[i] += 5);
	}
}
// �ڷ��� ũ�� ���ϱ�
# include <stdio.h>
int main() {
    int num1 = 0;
    int size1, size2;

    size1 = sizeof num1; //���� num1�� �ڷ��� ũ�� size1=sizeof(num1) �� ����.
    size2 = sizeof(int); //int �ڷ����� ũ��

    printf("num1�� ũ��: %d\n", size1);
    printf("int�� ũ��: %d\n", size2);

    printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
        sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    // sizeof �� char, short, int, long, long long �� ũ�⸦ ���Ѵ�.
    return 0;
}
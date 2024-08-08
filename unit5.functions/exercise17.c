/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int triangle(int x, int y, int z)
{
    if (pow(z, 2) == pow(x, 2) + pow(y, 2)) {
        return 1;
    }
    if (pow(x, 2) == pow(z, 2) + pow(y, 2)) {
        return 1;
    }
    if (pow(y, 2) == pow(x, 2) + pow(z, 2)) {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int result;
    result= triangle(x, y, z);
    printf("%d\n", result);
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isEven(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {

    int num,n;
    scanf("%d", &n); // n번 만큼 num 입력 받기

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        printf("%d\n", isEven(num));
    }
    
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rectangle(int side1, int side2)
{
    for (int i = 0; i < side1; i++) {
        for (int j = 0; j < side2; j++) {
            printf("*");
        }
        puts("");
    }
}

int main()
{
    int side1, side2;
    scanf("%d %d", &side1, &side2);
    rectangle(side1,side2);
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fillCharacter(int x, int y)
{
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("@");
        }
        puts("");
    }
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    fillCharacter(x, y);
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 정수의 각 자릿수를 배열에 저장하고 두 칸의 공백을 두고 출력하는 함수
void printDigits(int num) {
    int digits[5];  // 숫자를 저장할 배열 (최대 5자리)
    int count = 0;  // 자릿수 카운트

    // 숫자의 각 자릿수를 추출하여 배열에 저장
    while (num > 0) {
        digits[count] = num % 10;  // 마지막 자릿수를 추출
        num /= 10;                 // 마지막 자릿수를 제거
        count++;
    }

    // 자릿수를 역순으로 두 칸의 공백을 두고 출력
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", digits[i]);
        if (i > 0) {
            printf("  ");  // 두 칸의 공백을 추가
        }
    }
    printf("\n");  // 줄 바꿈
}

int main() {
    int num;
    printf("1에서 32767 사이의 정수를 입력하세요: ");
    scanf("%d", &num);

    // 숫자가 유효한 범위 내에 있는지 확인
    if (num < 1 || num > 32767) {
        printf("유효한 숫자가 아닙니다.\n");
        return 1;
    }

    // 숫자의 자릿수를 출력
    printDigits(num);

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate(int hour, int min, int sec)
{
    if (hour >= 12)
        hour -= 12;
    int result = (hour * 3600) + (min * 60) + sec;
    return result;
}

int main()
{
    int hour1, min1, sec1;
    scanf("%d %d %d", &hour1, &min1, &sec1);
    int result1= calculate(hour1, min1, sec1);

    int hour2, min2, sec2;
    scanf("%d %d %d", &hour2, &min2, &sec2);
    int result2 = calculate(hour2, min2, sec2);

    if (result1 > result2)
        printf("%d\n", result1 - result2);
    else
        printf("%d\n", result2 - result1);
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float toYen(float dollar)
{
    return (dollar * 118.87);
}

float toEuro(float dollar)
{
    return (dollar * 0.92);
}

int main() {

    float dollar;
    scanf("%f", &dollar);

    double result1,result2;
    result1 = toYen(dollar);
    result2 = toEuro(dollar);
    printf("%10s%10s%10s", "dollar", "Yen", "Euro");
    puts("");
    printf("%10.2f %10.2f %10.2f", dollar, result1, result2);
    

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void doublemax(double num1, double num2, double num3, double num4)
{

    double num[4] = { num1,num2,num3,num4 };

    double max = num[0];

    for (int i = 0; i < 4; i++)
    {
        if (num[i] > max)
            max = num[i];
    }

    printf("%.2f\n", max);
}

int main()
{
    double num1, num2, num3, num4;
    scanf("%lf%lf%lf%lf", &num1, &num2, &num3, &num4);

    doublemax(num1, num2, num3, num4);
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void isPerfect(int num) {

    int digit[100] = { 0 };
    int sum = 0;
    int cnt = 0;
    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            digit[cnt] = i;
            sum += digit[cnt];
            cnt++;
        }
    }
    
    if (sum == num) {
        printf("%d\n",num);
    }

}

int main() {

    int num1;

    for (num1 = 1; num1 <= 1000; num1++) {
        isPerfect(num1);
    }
    
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void isreal(int a, int b, int c)
{
    double x1 = ( (-b) + sqrt(b * b - 4 * a * c) ) / (2*a) ;
    double x2 = ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a) ;

    if ((b * b - 4 * a * c) > 0) {
        printf("2개의 실근 %lf %lf을 가짐\n",x1,x2);
    }
    else if ((b * b - 4 * a * c) == 0) {
        printf("중근 %lf을 가짐\n",x1);
    }
    else
        printf("허근을 가짐\n");
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    isreal(a, b, c);

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int integersum(int num)
{
    int sum = 0;
    int arr[100] = { 0, };
    int cnt=0;

    while (num > 0)
    {
        arr[cnt] = num % 10;
        num /= 10;
        cnt++;
    }
    
    for (int i = 0; i < cnt; i++) {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("%d\n", integersum(num));
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int toQualityPoints(float avg)
{
    if ((avg >= 90.0) && (avg <= 100.0))
    {
        return 4;
    }
    else if (avg >= 80.0)
    {
        return 3;
    }
    else if (avg >= 70.0)
    {
        return 2;
    }
    else if (avg >= 60.0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    float avg;
    scanf("%f", &avg);
    printf("%d\n", toQualityPoints(avg));
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate a coin flip
int flip() {
    return rand() % 2; // 0 for tails, 1 for heads
}

int main() {
    int cnt1 = 0; 
    int cnt2 = 0; 

    // Seed the random number generator
    srand(time(0));

    for (int i = 0; i < 100; i++) {
        if (flip() == 0)
            cnt1++;
        else
            cnt2++;
    }

    // Print the results
    printf("%d %d\n", cnt1, cnt2);

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search() {
    return rand() % 1000 + 1;
}

int answer() {
    printf("Excellent! You guessed the number! Would you like to play again (y or n)? ");
    getchar(); // To consume the newline character left by previous scanf
    char c1;
    scanf("%c", &c1);
    return (c1 == 'y' || c1 == 'Y');
}

int main() {
    srand(time(0)); // Seed the random number generator

    int num;
    int num1 = search();
    int cnt = 0; // Initialize cnt here

    printf("I have a number between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    printf("Please type your first guess.\n");

    while (1) {
        scanf("%d", &num);
        cnt++; // Increment cnt on each guess

        if (num == num1) {
            if (cnt <= 10) {
                printf("cnt is %d\n", cnt);
                printf("Ahah! You know the secret!\n");
            }
            else {
                printf("cnt is %d\n", cnt);
                printf("You should be able to do better!\n");
            }

            if (answer() == 1) {
                num1 = search(); // Generate a new number for the next game
                cnt = 0; // Reset cnt for the new game
                printf("I have a number between 1 and 1000.\n");
                printf("Can you guess my number?\n");
                printf("Please type your first guess.\n");
                continue;
            }
            else {
                break;
            }
        }
        else {
            if (num < num1) {
                if (cnt <= 10) {
                    printf("Either you know the secret or you got lucky! ");
                }
                else {
                    printf("You should be able to do better! ");
                }
                
                printf("Too low. Try again.\n");
            }
            else {
                if (cnt <= 10) {
                    printf("Either you know the secret or you got lucky! ");
                }
                else {
                    printf("You should be able to do better! ");
                }
                printf("Too high. Try again.\n");
            }
        }
    }

    return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number between 1 and 1000
int generate_random_number() {
    return rand() % 1000 + 1;
}

// Function to ask if the player wants to play again
int ask_to_play_again() {
    char response;
    printf("Excellent! You guessed the number! Would you like to play again (y or n)? ");
    getchar(); // To consume the newline character left by previous scanf
    scanf("%c", &response);
    return (response == 'y' || response == 'Y');
}

int main() {
    srand(time(0)); // Seed the random number generator

    int target, guess;
    int playing = 1;

    while (playing) {
        target = generate_random_number();
        int attempts = 0;

        printf("I have a number between 1 and 1000.\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess.\n");

        while (1) {
            scanf("%d", &guess);
            attempts++;

            if (guess == target) {
                printf("cnt is %d\n", attempts);
                if (attempts <= 10) {
                    if (attempts == 10) {
                        printf("Ahah! You know the secret!\n");
                    }
                    else {
                        printf("Either you know the secret or you got lucky!\n");
                    }
                }
                else {
                    printf("You should be able to do better!\n");
                }

                if (ask_to_play_again()) {
                    break; // Break the inner loop to start a new game
                }
                else {
                    playing = 0; // Exit the game
                    break;
                }
            }
            else if (guess < target) {
                printf("Too low. Try again.\n");
            }
            else {
                printf("Too high. Try again.\n");
            }
        }
    }

    return 0;
}


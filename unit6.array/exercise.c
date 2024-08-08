/**
int main() {

    int m[3][3] = { 0, };

    

   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           m[i][j] = 3;
           printf("%d", m[i][j]);
       }
       puts("");
   }

   return 0;
}

#include <stdio.h>
int main() {

    int sales[4][5] = {
        { 23, 45, 12, 56, 34 },
        { 67, 89, 23, 45, 78 },
        { 90, 12, 34, 56, 78 },
        { 11, 22, 33, 44, 55 }
    };

    int max = sales[0][0];
    int min = sales[0][0];

    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 5; j++) {
            if (sales[i][j] > max)
                max = sales[i][j];
        }
    }

    printf("%d\n", max);

    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 5; j++) {
            if (sales[i][j] <min)
                min = sales[i][j];
        }
    }

    printf("%d\n", min);
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*
    int grades[5][20] = {
    {85, 78, 92, 88, 76, 95, 89, 74, 83, 90, 67, 82, 91, 84, 79, 77, 93, 81, 80, 68},
    {88, 85, 79, 92, 75, 83, 90, 76, 89, 77, 86, 80, 94, 82, 87, 78, 91, 74, 93, 81},
    {79, 90, 88, 84, 77, 92, 85, 78, 81, 86, 93, 80, 87, 83, 94, 91, 76, 89, 82, 75},
    {92, 89, 81, 77, 85, 84, 79, 93, 90, 88, 86, 82, 74, 83, 78, 91, 87, 76, 80, 94},
    {80, 87, 93, 78, 84, 76, 92, 85, 79, 89, 88, 90, 91, 83, 77, 86, 82, 81, 74, 75}
    };

    
    
    double avg;
    int sum=0;
    for (int i = 0; i < 20; i++) {
        sum += grades[0][i];
        avg = (sum / 3.0);
    }
    printf("%lf ", avg);

    
        for (int i = 0; i < 5; i++) {
        printf("%d ", grades[i][1]);
    }

    int max = grades[0][0];
    for (int i = 0; i < 20; i++) {
        if (grades[0][i] > max)
            max = grades[0][i];
    }
    printf("%d ", max);

    for (int i = 0; i < 20; i++) {
        grades[0][i] = 100;
        printf("%d ", grades[0][i]);
    }
    
    puts("");

    for (int j = 0; j < 5; j++) {
        grades[j][1] = 100;
        printf("%d ", grades[j][1]);
    }
    puts("");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 20; j++) {
            scanf("%d", &grades[i][j]);
        }
    }
    
    for (int k = 0; k < 5; k++) {
        for (int m = 0; m < 20; m++) {
            grades[k][m] = 0;
            printf("%d ", grades[k][m]);
        }
    }

    double mathGrades[25] = {
    85.5, 78.2, 92.3, 88.0, 76.8, 95.4, 89.1, 74.6, 83.7, 90.2,
    67.9, 82.5, 91.8, 84.3, 79.4, 77.1, 93.6, 81.7, 80.2, 68.9, 68.9
    };

    // Print column headers
    printf("    ");
    for (int j = 0; j < 20; j++) {
        printf("%4d", j);
    }
    printf("\n");

    // Print array elements
    for (int i = 0; i < 5; i++) {
        printf("%2d  ", i); // Row header
        for (int j = 0; j < 20; j++) {
            printf("%4d", grades[i][j]);
        }
        printf("\n");
    }
   

    double sales[20] = { 0 };

    for (int i = 0; i < 20; i++)
    {
        scanf("%lf", &sales[i]);
    } */

    double allowance[75] = {
        150.5, 200.0, 180.75, 195.25, 210.0, 170.4, 165.5, 155.0, 190.3, 175.6,
        160.2, 185.5, 200.75, 220.1, 230.0, 195.4, 180.0, 210.5, 205.75, 215.25,
        190.0, 170.75, 165.0, 180.2, 185.0, 190.4, 175.5, 200.1, 205.0, 195.75,
        210.0, 220.5, 225.3, 215.0, 205.2, 200.3, 190.5, 185.0, 175.2, 180.3,
        165.5, 155.75, 160.0, 170.2, 180.0, 190.5, 200.0, 210.25, 220.5, 230.0,
        175.6, 165.75, 155.5, 145.0, 135.2, 125.5, 115.0, 105.75, 95.3, 85.5,
        75.0, 65.4, 55.3, 45.75, 35.5, 25.0, 15.3, 10.0, 5.25, 0.0,
        150.75, 200.3, 185.5, 195.0, 170.75
    };

    for (int i = 0; i < 75; i++) {
        allowance[i] += 1000;
        printf("%lf", allowance[i]);
    }



    

    return 0;
    


    


    return 0;
}
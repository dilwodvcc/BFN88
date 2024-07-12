#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int n, int matrix[n][n]) {
        puts("");
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        printf("%3d ", matrix[i][j]);
                }
                puts("");
        }
        puts("");
}

void random(int n, int matrix[n][n]) {
        for (int i = 0; i < n; i++) 
        {
                for (int j = 0; j < n; j++) 
                {
                    matrix[i][j] = rand() % 10;
                }
        }
}

int main () {
        srand(time(NULL));

        int n = 3;
        int matrix[n][n];

        random(n,matrix);
        printf("\tKo'rinishi\n");
        print(n,matrix);
        printf("\t1 - ustun : ");

            for (int j = 0; j < n; j++)
            {
                    printf("%d ",matrix[j][0]);
            }
        return 0;
}
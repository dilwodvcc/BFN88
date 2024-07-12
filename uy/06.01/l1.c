#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int n, int m, int matrix[n][m]) {
        puts("");
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        printf("%3d ", matrix[i][j]);
                }
                puts("");
        }
        puts("");
}

void random(int n,int m, int matrix[n][m]) {
        for (int i = 0; i < n; i++) 
        {
                for (int j = 0; j < m; j++) 
                {
                    matrix[i][j] = rand() % 18 - 8;
                }
        }
}

int main () {
        srand(time(NULL));

        int n = 3 ,m = 4;
        int matrix[n][m];

        random(n,m, matrix);
        printf("\tKo'rinishi\n");
        print(n,m,matrix);
        printf("\t1 - qator : ");

            for (int j = 0; j < m; j++)
            {
                    printf("%d ",matrix[0][j]);
            }
        return 0;
}
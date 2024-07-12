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
                    matrix[i][j] = rand() % 10;
                }
        }
}
void yigindi(int n,int m, int matrix[n][m])
{
    puts("");
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += matrix[i][j];
        }
        printf("\t%d - qator yigindisi = %d",i,sum);
        puts("");
    }
    
}
int main () {
        srand(time(NULL));

        int n,m;
        printf("\t\tQatorni kiriting :");
        scanf("%d",&n);
        printf("\t\tustunni kiriting :");
        scanf("%d",&m);

        int matrix[n][m];

        random(n,m, matrix);
        printf("\tKo'rinishi\n");
        print(n,m,matrix);
        yigindi(n,m,matrix);
}
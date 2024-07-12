#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *file1 = fopen("t.txt", "r");

    FILE *file2 = fopen("out.txt", "w");
    int n;
    printf("Son kiriting !");
    scanf("%d",&n);
    
    char text[100];
    int count = 0;
    while (fscanf(file1, " %c",&text) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            fprintf(file2," %c",text[i]);
        } 
    }
    for (int i = 0; i < n; i++)
        {
            fprintf(file2," %s",text[i]);
        }
    fclose(file1);
    fclose(file2);
    return 0;
}
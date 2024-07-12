#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *file1 = fopen("text.txt", "r");

    FILE *file2 = fopen("out.txt", "w");
    int n;
    printf("Qatorni kiriting !");
    scanf("%d",&n);
    if (!(n<=6&&n>0))
    {
        printf("Xatolik!");
    }
    
    char text[100];
    int count = 0;
    while (fgets(text, 100, file1))
    {
        count ++;
        if (count == n)
        {
            continue;
        }
        fprintf(file2," %s\n",text);

    }
    
    fclose(file1);
    fclose(file2);
    return 0;
}
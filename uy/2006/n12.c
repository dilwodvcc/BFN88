#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    FILE *file = fopen("text.txt","r");
    if (file == NULL)
    {
        printf("\tBunday file yo'q !");
        exit(1);
    }
    char a[32];
    int count = 0;
    while (!feof(file))
    {
        fscanf(file, " %s" , a);
        if (strcmp(a,"is") == 0)
        {
            count++;
        }
        
    }
    printf("\tFileda %d ta is qatnashgan ! ! ! ",count);
}
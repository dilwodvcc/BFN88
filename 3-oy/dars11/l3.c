#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int a = 10;
    char arr[a];
    for (int i = 0; i < a; i++)
    {
        arr[i]=rand () % 9;
    }

    FILE *fw = fopen("juft.bin","wb");
    for (int i = 0; i < a; i++)
    {
       if (arr[i] % 2 == 0)
    {
        fwrite(&arr,a,1,fw);
        
    } 
    }fclose(fw);

    FILE *fw11 = fopen("son.bin","wb");
    for (int i = 0; i < a; i++)
    {
        fwrite(&arr,a,1,fw11);
    }fclose(fw11);
    FILE *fw1 = fopen("toq.bin","wb");
    for (int i = 0; i < a; i++)
    {
       if (arr[i] % 2 == 1)
    {
        fwrite(&arr,a,1,fw1);
        
    } 
    }fclose(fw1);
    FILE *fr = fopen("juft.bin","rb");
    puts("\tJuftlar");
    for (int i = 0; i < a; i++)
    {
        
       if (arr[i] % 2 == 0)
    {
        fread(arr,4,1,fr);
        printf(" %d",arr[i]);
        
    } 
    }fclose(fr);
    puts("");
    FILE *fr1 = fopen("toq.bin","rb");
    puts("\tToqlar");
    for (int i = 0; i < a; i++)
    {
        
       if (arr[i] % 2 == 1)
    {
        fread(arr,4,1,fr1);
        printf(" %d",arr[i]);
        
    } 
    }fclose(fr1);
    puts("\n Sonlar ");
    FILE *fr11 = fopen("son.bin","rb");
    for (int i = 0; i < a; i++)
    {
        fread(arr,4,1,fr11);
        printf(" %d",arr[i]);
    }fclose(fw11);
}
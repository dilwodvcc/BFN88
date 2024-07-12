#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(0));
    int uz = 10;
    int *arr = malloc (uz * sizeof(int));
     for (int i = 0; i < uz; i++)
     {
        arr[i] = rand() % 10;
     }
     for (int i = 0; i < uz; i++)
     {
      if (arr[i] % 2 == 0)
      {
         printf("%d ",arr[i]);
      }
     }
}
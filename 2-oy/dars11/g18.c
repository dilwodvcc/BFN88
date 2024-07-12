#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    
    srand(time(NULL));
    int arr[10];
        int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        arr[i]= rand() % 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if(max>arr[i])
        {
            
        }
    }
}
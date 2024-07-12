#include <stdio.h>
    int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("i = %d\n",i);
        for (int j = 1; j <= 5; j++)
        {
            printf("\tj = %d\n",j);break;
        }
        
    }
    
}
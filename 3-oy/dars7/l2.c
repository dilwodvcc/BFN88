#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    float boy;
    char name[32];
    char lastname[32];
    int age;
    bool status;
}USER;
void aaa(USER *user)
{
    puts("");
    printf("\tIsmi : %s\n",user->name);
    printf("\tFamilyasi : %s\n",user->lastname);
    printf("\tYoshi : %d\n",user->age);
    printf("\tB'yi : %g\n",user->boy);
    if (user->status)
        {
            printf("\tHolati : Oline");
        }
    else
    {
        printf("\tHolati : Offline");
    }
}
USER input()
{
    USER new;
    printf("\t\tIsm kiriting : ");
    scanf(" %s",new.name);
    printf("\t\tFamilya kiriting : ");
    scanf(" %s",new.lastname);
    printf("\t\tYosh kiriting : ");
    scanf(" %d",&new.age);
    printf("\t\tHolati kiriting : ");
    scanf(" %d",&new.status);
    printf("\t\tBo'yingizni kiriting : ");
    scanf(" %g",&new.boy);
    return new;
}
int main ()
{
    
    USER user1 = input();
    aaa(&user1);
    puts("");
    USER user2 = input();
    aaa(&user2);
    puts("");
    USER user3 = input();
    aaa(&user3);
    
    
    
}
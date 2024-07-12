#include <stdio.h>
#include <string.h>
struct Chem
{
    char brand[64];
    float size;
    int soni;
};
int main ()
{
    struct Chem chem;
    chem.size = 30.5;
    strcpy(chem.brand , "Gucci");
    chem.soni = 5;

    printf("brend    :%s\n",chem.brand);
    printf("brend    :%g\n",chem.size);
    printf("brend    :%d\n",chem.soni);
}
#include <stdio.h>

int main ()
{
    int i;
    const int ci = 1;
    int *pi;
    const int *pci;
    pi = &i;
    *pi = 100;

    printf("print i, %d",i);
    printf("value of ci %d", ci);

}
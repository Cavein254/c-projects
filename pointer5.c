#include <stdio.h>

int main ()
{
    int x = 10;
    int *px = &x;
    *px = 100;
    int *ppx = &(*px);
    *ppx = 3000;


    printf("The value of x is %d:  \n", *px);
    printf("The address of x is %p: \n", &x);
    printf("The address of px is %p: \n", &px);
    printf("The address of ppx is %p: \n", &ppx);

    printf("\n\n\n The value of x is %d: \n", x);
    printf("The value of px is %d: \n", *px);
    printf("The value of ppx is %d: \n", *ppx);
}
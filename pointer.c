#include <stdio.h>

void main()
{
    int a = 5;
    int *p;
    printf("The value of a : %d and pointer p: %p", a,p);
    p = &a;
    printf("\n The new value %d \n", *p);

}

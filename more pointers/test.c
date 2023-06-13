#include <stdio.h>

int main () {
    const int a = 10;
    int *pa;
    int b = 10;
    int *pb;
    int counter = 1;

    while (counter < 10) {
        printf("The value of a is: %d \n",a);
        printf("The position of a is: %d \n",a);
        printf("The value of pointer of b: %p \n",&b);
        printf("The position of pointer of b: %d \n",b);
        *pb++;
        // b++;
        *pa++;
        counter++;
    }
}
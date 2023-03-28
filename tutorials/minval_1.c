#include <stdio.h>
/**
 * A function to find the minimum value of an array
*/
int min_val(int array[], int length)
{
    int min = array[0];
    int i;

    for (i = 1; i < length; i++)
    {
        if (array[i] <= min)
        {
            min = array[i];
        }
    }

    return min;
}

int main (void)
{
    int array[]= {222,31,22,17,34,21,42,62,5,10};
    int min = min_val(array, 10);
    printf("%d \n", min);
}
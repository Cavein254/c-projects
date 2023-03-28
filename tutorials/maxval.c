#include <stdio.h>
/** 
 * A function to find the maximum
 * value of an array
*/
int max_int( int array[], int length)
{
    int i;
    int max;
    for (i = 0; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        return max;
    }
}

int main(void)
{
    int array[]= {222,31,22,17,34,21,42,62,5,10};
    int max = max_int(array, 10);
    printf("The maximum value of the array is: %d \n", max);
}
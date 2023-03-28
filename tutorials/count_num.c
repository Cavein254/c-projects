#include <stdio.h>
/**
 * This function counts the number of occurances
 * of a given integer with an array
*/
int num_occurance(int array[], int num, int length)
{
    int count = 0;
    int i;

    for (i = 0; i < length; i++ )
    {
        if (num == array[i])
        {
            count++;
        }
    }
    printf("count is %d \n", count);
    return (count);
}

int main(void)
{
    int array[]= {222,31,22,17,5,21,42,5,5,10};
    int num = 5;
    int occur = num_occurance(array, num, 10);
    printf("The number of occurance of %d is : %d \n", num, occur);
}
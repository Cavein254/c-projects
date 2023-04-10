#include <stdio.h>
#include <cstring>

int main(void)
{
    char s1[30] = "my string";

    strcpy(s1, "Another string");

    printf("%s", s1);
    printf("\n The end of the for loop");
}
#include <stdio.h>

void cmps(const char*, const char*);
int main () 
{
    const char * s1 = "This is a string";
    const char * s2 = "This is a string";
    cmps(s1, s2);
}

void cmps (const char *s1, const char *s2)
{
    while (*s1 != '\n') {
        if (*s1 != *s2){
            printf("The two strings are not equal \n");
            return (1);
        }
    }
    printf("This strings are equal");
    return (0);
}
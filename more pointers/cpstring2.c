#include <stdio.h>

int str_eq(const char *s1,const char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == 0)
            return (0);
        s1++,s2++;
    }
    return (1);
}

int main() {
    char s1 = "Thi is the end";
    char *ps1 = &s1;
    char s2 = "Thi is the end";
    char *ps2 = &s2;

    str_eq(ps1,ps2);
    return (0);
}
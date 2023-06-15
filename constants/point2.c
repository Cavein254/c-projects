#include <stdio.h>
#include <stdlib.h>
#define ARSZ 10

int main () 
{
    float fa[ARSZ], *fp1, *fp2;

    fp1 = fp2 = fa;
    while (fp2 != &fa[ARSZ]) {
        printf("Diff: %d\n", (int) (fp2-fp1));
        fp2++;
    }
    exit(EXIT_SUCCESS);
}
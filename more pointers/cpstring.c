#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINELNG 100

int main ()
{
    char in_line[LINELNG];
    char *cp;
    int c;

    cp = in_line;
    while ((c = getc(stdin)) != EOF) {
        if (cp == &in_line[LINELNG-1] || c=='\n') {
            *cp = 0;
            if (strcmp(in_line, "stop") == 0)
                exit(EXIT_SUCCESS);
            else
                printf("line was %d char long \n", (int)cp);
            cp = in_line;
        }
        else
            *cp++ = c;
    }
    exit(EXIT_SUCCESS);
}
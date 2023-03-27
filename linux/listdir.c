/**
 * A function that replicates the functionality of
 * ls
*/
#include <stdio.h>
#include <dirent.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
    if (argc == 1)
    {
        struct dirent *d;
        DIR *dir = open(".");
        if(!dir) {
            perror("Unable to read directory");
        }

        return 0;
    }
}
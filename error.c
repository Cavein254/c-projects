#include <stdio.h>

int main () 
{
	int m = 25, n = 77;
	char c = '*';
	int *itemp;
	int *pn;

	pn = &n;
	printf("n is %d", *pn);
}
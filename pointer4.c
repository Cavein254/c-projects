#include <stdio.h>

int main ()
{
	int m = 10, n = 5;
	int *mp, *np;

	mp = &m;
	np = &n;

	*mp = *mp + *np; //15
	*np = *mp - *np; //10

	printf("%d %d\n %d %d\n", m, *mp, n, *np);

	return (0);
}
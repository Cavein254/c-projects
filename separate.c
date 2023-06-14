#include <stdio.h>
#include <math.h>

void separate(double num, char *signp, int *wholep, double *fracp);
void separate(double num, char *signp, int *wholep, double *fracp)
{
	double magnitude;
	// determine sign of number 
	if (num < 0)
		*signp = '-';
	else if (num == 0)
		*signp = ' ';
	else
		*signp = '+';

	/*Find the magnitude of num and separate
	it into whole and fractional parts */
	magnitude = fabs(num);
	*wholep = floor(magnitude);
	*fracp = magnitude - *wholep;

}
int main()
{
	float value;
	char sn;
	int whl;
	double fr;

	printf("Enter a value to analyze :>");
	scanf("%1f",&value);

	printf("Separate a value into three parts");
	separate(value, &sn, &whl, &fr);

	printf("Parts of %.4f\n sign: %c\n", value, sn);
	printf("whole number magnitude: %d\n",whl);
	printf("Fraction part: %.4f\n", fr);

	return (0);
}
#include <stdio.h>

int main (void)
{
	FILE *inp;
	FILE *outp;

	char item;

	inp = fopen("test.c", "r");
	outp = fopen("written.c","w");

	input_status = fscanf(inp, "%c", &item);

	while (input_status == 1) {
		fprintf(outp, "%d",&item);
		input_status = fscanf(inp,"%d", &item);
	}

	fclose(inp);
	fclose(outp);

	return (0);
}
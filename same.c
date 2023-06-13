#include <stdio.h>

int main() {
	int x, y, z;
	x = 10;
	y = x;
	x= 13;
	int *py = &y;
	*py = 100;
	printf("The value of x %d y %d is \n", x,y);

	printf("Enter the value of the second number \n");
	scanf("%d",&z);
	printf("The value of the last number is %d \n", z);

	return 0;
}
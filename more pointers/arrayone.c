#include <stdio.h>

void greek()
{
	int val[5] = {12,22,33,44,55};
	int sum = 0;

	int * ptr;

	//allocate the value of val[0]
	ptr = val;

	for(int i = 0; i < 5; i ++){
		printf("The value of sum is : %d", sum);
		sum = sum + val[i];
		ptr ++;
	}
}

int main()
{
	greek();
	return 0;
}

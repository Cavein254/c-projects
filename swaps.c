#include <stdio.h>

int swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("The original value of a is %d \n", a);
  printf("The original value of b is %d \n", b);
  printf("The new value of a is %d \n", a);
  printf("The new value of b is %d \n \n", b);
  return a,b;
}

void main(){
  int a = 11;
  int b = 66;
  swap(a,b);
  printf("The value of a in main is %d \n",a);
  printf("The value of b in main is %d \n\n\n", b);
  printf("The end");
}

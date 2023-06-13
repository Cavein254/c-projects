#include <stdio.h>

void get_items (char *, float*, float*,float*,float*);




/*
* get_items :This function takes the name, qty and price 
* calculating the total cost 
*/
void get_items (char *item, float *qty, float *price,float *total,float *fTotal);

int main ()
{
	char item;
	float qty;
	float price;
	float total;
	float fTotal;

	printf("\n Enter the item name : ");
	scanf("%c", &item);
	printf("\n Enter the item quantity : ");
	scanf("%f", &qty);
	printf("\n Enter the item price : ");
	scanf("%f", &price);

	get_items(&item, &qty, &price, &total, &fTotal);

	printf("*************************** BILL *******************************\n");
	printf("Item \t Quantity \t Price \t Amount \n");
	printf("%c \t %.2f \t %.2f \t %.2f \n", item,qty,price,total);
	printf("____________________________________________________________________\n");
	printf("____________________________________________________________________\n");
	printf("\t\t Amount to be Paid \n");
	printf("\t\t %.2f \n", total);
	printf("____________________________________________________________________\n");
	printf("\t\t %.2f \n", fTotal);
}

void get_items (char *item, float *qty, float *price,float *total,float *fTotal)
{
	*total = *price * *qty;
	*fTotal = *total;
}
#include <stdio.h>

int main()
{
	char itemname[32] = "Fish Buffalo";
	int quantity = 12;
	float price = 78.66;
	float total = price * quantity;
	printf("You have purchased %d %s at %.2f. The total cost is: %.2f \n",
				 quantity, itemname, price, total);
	return 0;
}

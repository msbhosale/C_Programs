#include<stdio.h>
void main()
{
	int sellingPrice,costPrice;

	printf("Enter selling and cost price : ");
	scanf("%d%d",&sellingPrice,&costPrice);

	if(sellingPrice > costPrice)
	{
		printf("You earned profit\n");
	}
	else if(costPrice > sellingPrice)
	{
		printf("There is a loss\n");
	}
	else
	{
		printf("No profit, no loss\n");
	}
}
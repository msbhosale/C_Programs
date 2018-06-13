#include<stdio.h>
void main()
{
	int number,temp;
	int d1,d2,d3;

	printf("Enter 3 digit number : ");
	scanf("%d",&number);

	temp = number;

	d1 = temp % 10;
	temp = temp / 10;

	d2 = temp % 10;
	temp = temp / 10;

	d3 = temp;

	int rNumber = (d1 * 100) + (d2 * 10) + d3;

	if(rNumber == number)
	{
		printf("Number is pallindrom\n");
	}
	else
	{
		printf("Number is not pallindrom\n");
	}
}
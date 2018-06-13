#include<stdio.h>
void main()
{
	int number;
	int d1,d2,d3;

	printf("Enter a 3 digit number : ");
	scanf("%d",&number);//435

	d1 = number % 10;//d1 = 5
	number = number / 10;//number = 43

	d2 = number % 10;//d2 = 3
	number = number / 10;//number = 4

	d3 = number;//d3 = 4

	int rNumber = (d1*100)+(d2*10)+d3;

	printf("Reverse is : %d\n",rNumber);
}
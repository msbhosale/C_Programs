#include<stdio.h>
void displayNumber(int);
void main()
{
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);

	displayNumber(number);
}
void displayNumber(int a)
{
	printf("Number is %d\n",a);
}
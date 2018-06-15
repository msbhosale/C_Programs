#include<stdio.h>
void main()
{
	int number = 4;
	int factorial = 1;

	for(int i=number;i>=1;i--)
	{
		factorial = factorial * i;
	}

	printf("Factorial of %d is %d\n",number,factorial);
}
#include<stdio.h>
void main()
{
	int sum = 0;

	for(int i=1;i<=10;i++)
	{
		sum = sum + i;
	}

	printf("Sum of first 10 natural numbers %d\n",sum);
}
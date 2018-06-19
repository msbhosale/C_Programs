#include<stdio.h>
void main()
{
	int number = 15;
	int counter = 0;

	for(int i=2;i<number;i++)
	{
		if(number%i == 0)
		{
			counter++;
		}
	}
	printf("Counter : %d\n",counter);
	if(counter == 0)
	{
		printf("Number is prime\n");
	}
	else
	{
		printf("Number is not prime\n");
	}
}
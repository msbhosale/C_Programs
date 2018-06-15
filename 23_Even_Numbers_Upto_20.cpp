#include<stdio.h>
void main()
{
	int number = 1;

	while(number <= 20)
	{
		if(number%2 == 0)
			printf(" %d\n",number);

		number++;
	}
}
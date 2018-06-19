#include<stdio.h>
void main()
{
	int counter = 0;
	int number = 2;

	while(counter <= 25)
	{
		int status = 0;

		for(int i=2;i<number;i++)
		{
			if(number%i == 0)
			{
				status++;
			}
		}

		if(status == 0)
		{
			printf("%d\n",number);
			counter++;
		}

		number++;
	}
}
#include<stdio.h>
int primeNumber(int);
void main()
{
	int status = primeNumber(124);
	if(status == 1)
		printf("Prime\n");
	else
		printf("Not prime\n");
}
int primeNumber(int number)
{
	int counter = 0;
	for(int i=2;i<number;i++)
	{
		if(number%i == 0)
			counter++;
	}

	//printf("%d\n",counter);

	if(counter == 0)
		return 1;
	else 
		return 0;
}

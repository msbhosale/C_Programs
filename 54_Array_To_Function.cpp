#include<stdio.h>
void displayNumber(int);
void main()
{
	int numbers[] = {1,4,9,8,6};

	for(int i=0;i<5;i++)
	{
		displayNumber(numbers[i]);
	}
}
void displayNumber(int s)
{
	printf("%d\n",s);
}
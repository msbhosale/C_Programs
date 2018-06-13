#include<stdio.h>
void main()
{
	char gender = 'F';
	int age = 20;

	if(gender == 'M' && age >= 21)
	{
		printf("You are eligible\n");
	}
	else if(gender == 'F' && age >= 18)
	{
		printf("You are eligible\n");
	}
	else
	{
		printf("You are not eligible\n");
	}
}
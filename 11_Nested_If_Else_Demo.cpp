#include<stdio.h>
void main()
{
	char gender = 'F';
	int age = 20;

	if(gender == 'M')
	{
		if(age > 21)
		{
			printf("Hey, Man ! You are Eligible\n");
		}
		else
		{
			printf("Come on boy, you are Not Eligible\n");
		}
	}
	else
	{
		if(age > 18)
		{
			printf("Madam you are Eligible\n");
		}
		else
		{
			printf("Little princess you are Not Eligible\n");
		}
	}
}
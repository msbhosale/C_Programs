#include<stdio.h>
void main()
{
	char ch;

	printf("Enter a character : ");
	scanf("%c",&ch);

	int intCH = (char) ch;

	if(intCH >= 65 && intCH <= 90)
	{
		printf("Capital alphabet\n");
	}
	else if(intCH >= 97 && intCH <= 122)
	{
		printf("Small alphabet\n");
	}
	else if(intCH >= 48 && intCH <= 57)
	{
		printf("Its a number\n");
	}
	else
	{
		printf("Other character\n");
	}
}
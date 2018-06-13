#include<stdio.h>
void main()
{
	int number1,number2;

	printf("Enter two numbers : ");
	scanf("%d%d",&number1,&number2);

	if(number1 > number2)
	{
		printf("%d is greater than %d\n",number1,number2);
	}
	else if(number2 > number1)
	{
		printf("%d is greater than %d\n",number2,number1);
	}
	else
	{
		printf("Both numbers are equal\n");
	}
	
}
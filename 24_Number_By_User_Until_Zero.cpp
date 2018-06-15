#include<stdio.h>
void main()
{
	int sum = 0;
	int number;

	printf("Enter a number : ");
	scanf("%d",&number);

	while(number != 0)
	{
		sum = sum + number;
		printf("Enter a number : ");
		scanf("%d",&number);
	}

	printf("Sum is : %d\n",sum);
}
#include<stdio.h>
void main()
{
	int number;

	printf("Enter a number : ");
	scanf("%d",&number);

	for(int i = 1;i <= 10;i++)
	{
		//int a = number * i;
		printf("%d x %d : %d\n",number,i,number * i);
	}
}
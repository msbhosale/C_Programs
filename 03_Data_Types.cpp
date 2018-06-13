#include<stdio.h>
int main()
{
	int number;
	char character;
	float myFloat;

	printf("Enter a character : ");
	scanf("%c",&character);

	printf("Enter a number : ");
	scanf("%d",&number);

	printf("Enter a float value : ");
	scanf("%f",&myFloat);

	printf("You have entered %c \t %d \t %.2f \n",character,number,myFloat);

	return 0;
}
#include<stdio.h>
void main()
{
	int number1,number2;
	int choice;
	int addition,substraction;

	printf("Enter two numbers : ");
	scanf("%d%d",&number1,&number2);

	printf("1.Addition\n2.Substraction\n3.Exit\n");
	printf("Enter option : ");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
		addition = number1 + number2;
		printf("Addition is %d\n",addition);
		break;
	case 2:
		substraction = number1 - number2;
		printf("Substraction is %d\n",substraction);
		break;
	case 3:
		printf("OK\n");
		break;
	default :
		printf("Invalid choice\n");
	}
}
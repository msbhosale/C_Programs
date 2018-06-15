#include<stdio.h>
void main()
{
	int choice;
	do
	{
		int number1,number2;
		int addition;

		printf("\nEnter two numbers : ");
		scanf("%d%d",&number1,&number2);
		
		addition = number1 + number2;

		printf("Addition is %d\n",addition);

		printf("Do you want to continue ?\n");
		printf("1.Yes\n2.No\nEnter choice : ");
		scanf("%d",&choice);

	}while(choice == 1);
}
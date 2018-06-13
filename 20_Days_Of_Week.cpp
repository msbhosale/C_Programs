#include<stdio.h>
void main()
{
	int numberOfDay;

	printf("Enter number of a day : ");
	scanf("%d",&numberOfDay);

	switch(numberOfDay)
	{
	case 1:
		printf("Monday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednsday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	default:
		printf("Invalid input\n");
	}
}
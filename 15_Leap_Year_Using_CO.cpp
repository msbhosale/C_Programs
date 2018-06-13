#include<stdio.h>
void main()
{
	int year;

	printf("Enter a year : ");
	scanf("%d",&year);

	(year%4==0) ? printf("Leap year\n") : printf("Not a leap year\n");
}
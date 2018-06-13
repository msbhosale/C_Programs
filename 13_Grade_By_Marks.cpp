#include<stdio.h>
void main()
{
	int marks = 67;
	char grade;

	if(marks >= 75)
	{
		grade = 'A';
	}
	else if(marks >= 60 && marks < 75)
	{
		grade = 'B';
	}
	else if(marks >= 40 && marks < 60)
	{
		grade = 'C';
	}
	else
	{
		grade = 'F';
	}

	printf("Your grade is %c\n",grade);
}
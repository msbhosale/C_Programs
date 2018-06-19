#include<stdio.h>
void main()
{
	int number = 10;
	int *ptrNumber;
	ptrNumber = &number;

	//Regular use
	printf("Value of a number : %d\n",number);
	printf("Address of a number : %d\n",&number);

	//Using pointer
	printf("Value of a number : %d\n",*ptrNumber);
	printf("Address of a number : %d\n",ptrNumber);

}
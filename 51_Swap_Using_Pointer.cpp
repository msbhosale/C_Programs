#include<stdio.h>
void swap(int*,int*);
void main()
{
	int number1 = 12;
	int number2 = 24;

	int *ptrNumber1 = &number1;
	int *ptrNumber2 = &number2;

	printf("Before swap : %d \t %d\n",number1,number2);
	swap(ptrNumber1,ptrNumber2);	
	printf("After swap : %d \t %d\n",number1,number2);
}
void swap(int *a,int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
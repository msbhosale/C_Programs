#include<stdio.h>
void addNumbers(int,int);
void main()
{
	addNumbers(15,12);
	addNumbers(45,-3);
}
void addNumbers(int a,int b)
{
	int addition = a + b;

	printf("Addition of %d and %d is : %d\n",a,b,addition);
}

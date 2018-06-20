#include<stdio.h>
void swap(int,int);
void main()
{
	int number1 = 45;
	int number2 = 110;

	swap(number1,number2);

	//Above function doesn't change actual values
	printf("%d\t%d\n",number1,number2);
}
void swap(int a,int b)
{
	int c = a;
	a = b;
	b = c;
}

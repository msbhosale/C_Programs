#include<stdio.h>
int addition(int,int);
void main()
{
	int number1 = 15;
	int number2 = 45;

	int add = addition(number1,number2);

	printf("Addition is : %d\n",add);
}
int addition(int a,int b)
{
	//int add = a + b;
	return a + b;
}
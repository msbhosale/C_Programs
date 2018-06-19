#include<stdio.h>
int evenOdd(int);
void main()
{
	int number = 74;

	int status = evenOdd(number);

	if(status == 1)	
		printf("Number is even\n");	
	else	
		printf("Number is odd\n");
}
int evenOdd(int a)
{
	if(a%2 == 0)
		return 1;
	else 
		return 0;
}
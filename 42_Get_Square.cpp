#include<stdio.h>
void getSquare(int);
void main()
{
	int number = 20;

	getSquare(number);

}
void getSquare(int s)
{
	int square  = s * s;
	printf("Square of %d is %d\n",s,square);
}
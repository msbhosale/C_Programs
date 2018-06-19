#include<stdio.h>
int getSquare(int);
void main()
{
	int square = getSquare(15);

	printf("Square is %d\n",square);
}
int getSquare(int s)
{
	int square = s * s;

	return square;
}
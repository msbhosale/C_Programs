#include<stdio.h>
int main()
{
	int number = 25;
	float myFloat = number;//Implicite type casting

	printf("%.2f\n",myFloat);

	char c = 'Z';
	int intValueOfC = (int) c;//Explicite type cast

	printf("%d\n",intValueOfC);

	int number2 = 72;
	char charNumber2 = (char) number2;

	printf("%c\n",charNumber2);

	return 0;
}
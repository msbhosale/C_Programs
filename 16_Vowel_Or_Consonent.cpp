#include<stdio.h>
void main()
{
	char ch;

	printf("Enter an alphabet : ");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("Its a vowel\n");
	}
	else
	{
		printf("Its a consonent\n");
	}
}
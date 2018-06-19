#include<stdio.h>
#include<string.h>
void main()
{
	char name1[20] = "Aditya ";
	char name2[20] = "Parvate";

	strcat(name1,name2);

	printf("String : %s",name1);
}
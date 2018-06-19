#include<stdio.h>
void main()
{
	char name[15];

	printf("Enter name : ");
	//scanf("%s",name);

	gets(name);
	puts(name);
	//printf("Hello, %s",name);
}
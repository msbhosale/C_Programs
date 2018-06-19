#include<stdio.h>
#include<string.h>
void main()
{
	char name[] = "Amit";
	char name2[] = "Amit";

	int status = strcmp(name2,name);

	printf("%d\n",status);
}
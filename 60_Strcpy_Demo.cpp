#include<stdio.h>
#include<string.h>
void main()
{
	char name1[] = "Sample";
	char name2[10];

	strcpy(name2,name1);

	printf("Name 2 : %s\n",name2);
}
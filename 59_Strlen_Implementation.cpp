#include<stdio.h>
int getLength(char[]);
void main()
{
	char myName[] = "John Doe";

	int i = 0;
	while(myName[i] != '\0'){
		i++;
	}
	printf("Length of %s is %d\n",myName,i);

	int length = getLength(myName);
	printf("Length of %s is %d\n",myName,length);
	
}
int getLength(char a[])
{
	int length = 0;
	while(a[length] != '\0'){
		length++;
	}
	return length;
}
#include<stdio.h>
void sayHello();//Function declaration
void main()
{
	sayHello();//Calling of a function
	sayHello();
	sayHello();
}
//Function definition
void sayHello()
{
	printf("Hello, from MS !\n");
}
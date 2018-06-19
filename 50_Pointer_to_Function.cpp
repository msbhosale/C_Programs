#include<stdio.h>
void foo(int*);
void main(){

	int number = 10;
	int *ptrNumber = &number;

	printf("Before value : %d\n",number);

	foo(ptrNumber);

	printf("After value : %d\n",number);

}
void foo(int *p)
{
	*p = 7;
}
#include<stdio.h>
void display(int[]);
void main()
{
	int numbers[5] = {4,5,6,7};
	int records[5] = {0,1,2,3,4};

	display(numbers);
	printf("\n");
	display(records);
}
void display(int a[])
{
	for(int i=0;i<5;i++){

		printf("%d\n",a[i]);
	}
}
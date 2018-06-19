#include<stdio.h>
void main(){

	float records[7];
	float total = 0;

	for(int i=0;i<7;i++){

		printf(" Record for day %d : ",(i+1));
		scanf("%f",&records[i]);
		total = total + records[i];
	}

	printf("\n Records are : \n");

	for(int j=0;j<7;j++){

		printf(" Day %d : %.2f\n",(j+1),records[j]);
	}

	float average = total / 7.0;

	printf(" Average is : %.2f\n",average);
}
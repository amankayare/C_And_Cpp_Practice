/*
 ============================================================================
 Name        : assign1-9.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float tempCel,tempFah,temp1,temp2;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter tempreture in Celsius\n");
	scanf("%f", &tempCel);
	tempFah=((tempCel*9)/5+32);
	printf("Tempreture in Fahrenheit after conversion will be %f\n",tempFah);
	printf("Enter tempreture in Fahrenheit\n");
	scanf("%f", &temp1);
    temp2=((5/9)*(temp1-32));
	printf("Tempreture in Celsius after conversion will be %f",tempCel);

	return EXIT_SUCCESS;
}

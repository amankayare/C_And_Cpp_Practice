/*
 ============================================================================
 Name        : assign2-1.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1, num2, result;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter two numbers");
	scanf("%f %f",&num1,&num2);
	if(num2){
		result=num1/num2;
		printf("Result =%f",result);
	}
	else
		printf("divisor should not be zero");
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : assign1-8.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1, num2, num3, avg;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter three numbers");
	scanf("%f%f%f",&num1,&num2,&num3);
avg=(num1+num2+num3)/3;
printf("%f",avg);

	return EXIT_SUCCESS;
}

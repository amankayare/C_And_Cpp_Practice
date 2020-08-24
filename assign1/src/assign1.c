/*
 ============================================================================
 Name        : assign1.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int first, second;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("enter no. one\n");
	scanf("%d", &first);
	printf("enter no. two\n");
	scanf("%d", &second);
	printf("Sum of two numbers=%d\n",first+second);
	printf("Product of two numbers=%d\n",first*second);
	printf("Difference of two numbers=%d\n",first-second);


}

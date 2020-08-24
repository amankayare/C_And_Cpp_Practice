/*
 ============================================================================
 Name        : assign2-2.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter a number");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("Number is even");
	else
		printf("Number is odd");
	return EXIT_SUCCESS;
}

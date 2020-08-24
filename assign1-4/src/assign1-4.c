/*
 ============================================================================
 Name        : assign1-4.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row, col;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Pattern Using multiple printf()\n");
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");
	printf("--------------------------------\n");
	printf("Pattern Using single printf()\n");

	for (row = 1; row <= 5; row++) {
		for (col =1 ; col <= row; col++) {
			printf("*");
		}
		printf("\n");

	}

	return EXIT_SUCCESS;

}

/*
 ============================================================================
 Name        : assign1-6.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, i;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a number\n");
	scanf("%d", &num);
	for (i = 1; i <= 10; i++) {
		printf("%dx%d=%d\n", num, i, num * i);
	}
	return EXIT_SUCCESS;
}

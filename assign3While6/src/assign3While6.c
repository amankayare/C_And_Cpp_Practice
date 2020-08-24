/*
 ============================================================================
 Name        : assign3While6.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 1, num;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter a number\n");
	scanf("%d", &num);
	printf("All factors :: ");

	while (i <= (num / 2)) {
		if (num % i == 0) {
			printf("%d ", i);

		}
		i++;

	}

	return EXIT_SUCCESS;
}

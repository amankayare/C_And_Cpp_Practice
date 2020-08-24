/*
 ============================================================================
 Name        : assign3While4.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 1, num, fact = 1;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter a number\n");
	scanf("%d", &num);

	while (i <= num) {
		fact = fact * i;
		if (i == num) {
			printf("*%d=%d",num, fact);

		} else if (i == num - 1) {
			printf("%d", i);

		} else {
			printf("%d*", i);

		}
		i++;
	}
	return EXIT_SUCCESS;
}

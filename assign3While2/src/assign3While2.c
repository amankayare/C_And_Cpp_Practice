/*
 ============================================================================
 Name        : assign3While2.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no, i = 1;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter the no.\n");
	scanf("%d", &no);
	while (i <= 10) {
		printf("%d x %d = %d\n", no, i, no * i);
		i++;
	}
	return EXIT_SUCCESS;
}

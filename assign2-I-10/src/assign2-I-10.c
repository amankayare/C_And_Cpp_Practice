/*
 ============================================================================
 Name        : assign2-I-10.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter the character\n");
	scanf("%c", &ch);
	if ((ch <= 90 && ch >= 65) || (ch <= 122 && ch >= 97)) {
		printf("Category is: Letter \n");
		if (ch <= 90 && ch >= 65) {
			printf("-Upper case letter\n");
		} else {
			printf("-Lower case letter\n");
		}
	} else if (ch >= 48 && ch <= 57) {
		printf("Category is: Digit");
	} else if (ch == 32) {
		printf("Category is: Space");
	} else if (ch == 9) {
		printf("Category is: Tab |<-->|");
	} else if (ch == 10) {
		printf("Category is: New line (\\n)");
	} else if (ch == '\b') {
		printf("Category is: Carriage return(\\r) ");
	} else {
		printf("Not listed");
	}

	return EXIT_SUCCESS;
}

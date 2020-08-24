/*
 ============================================================================
 Name        : assign2-4.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("a.Using if-else\n");
	printf("Enter two number");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("num1 is greater ,value=%d\n", num1);
	else
		printf("num2 is greater ,value=%d\n", num2);
	printf("b.Using conditional/ternary operator\n");
	printf("Enter two number");
	scanf("%d %d", &num1, &num2);
	num1 > num2 ?
			printf("num1 is greater ,value=%d", num1) :
			printf("num2 is greater ,value=%d", num2);
	return EXIT_SUCCESS;
}

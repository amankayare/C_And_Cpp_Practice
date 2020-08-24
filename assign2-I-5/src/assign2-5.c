/*
 ============================================================================
 Name        : assign2-5.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, num3;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("a.Using if-else\n");
	printf("Enter Three numbers\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2) {
		if (num1 > num3) {
			printf("num1 is greater ,value=%d\n", num1);
		} else {
			printf("num3 is greater ,value=%d\n", num3);
		}
	} else {
		if (num2 > num3) {
			printf("num2 is greater ,value=%d\n", num2);
		} else {
			printf("num3 is greater ,value=%d\n", num3);
		}
	}
	printf("b.Using conditional/ternary operator\n");
	printf("Enter Three numbers\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	(num1 > num2)? (num1 > num3) ?printf("num1 is greater ,value=%d\n", num1):printf("num3 is greater ,value=%d\n", num3) :
			(num2 > num3)?printf("num2 is greater ,value=%d\n", num2) : printf("num3 is greater ,value=%d\n", num3);

	return EXIT_SUCCESS;
}

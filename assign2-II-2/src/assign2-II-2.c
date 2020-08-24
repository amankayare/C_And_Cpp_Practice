/*
 ============================================================================
 Name        : assign2-II-2.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef enum operator {
	Addition = '+', Subtraction = '-', Multiplication = '*', Division = '/'
} op;
int main(void) {
	int op1, op2;
	op choice;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter two operands \n");
	scanf("%d %d", &op1, &op2);
	printf("Enter operator \n");
	scanf("%*c %c", (char *) &choice);
	switch (choice) {
	case Addition:
		printf("Addition of %d and %d is %d", op1, op2, op1 + op2);
		break;
	case Subtraction:
		printf("Subtraction of %d and %d is %d", op1, op2, op1 - op2);
		break;
	case Multiplication:
		printf("Multiplication of %d and %d is %d", op1, op2, op1 * op2);
		break;
	case Division: {
		if (op2 == 0) {
			printf("Dinominator should not be zero for division");
		} else {
			printf("Division of %d and %d is %d", op1, op2, op1 / op2);
			break;
		}
	}

	}

	return EXIT_SUCCESS;
}

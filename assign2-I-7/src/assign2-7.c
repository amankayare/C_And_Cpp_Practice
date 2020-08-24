/*
 ============================================================================
 Name        : assign2-7.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int year;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("a.Without using logical operator\n");

	printf("Enter the year\n");
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("This is a leap year\n");

			} else {
				printf("This is not a leap year\n");

			}
		} else {
			printf("This is a leap year\n");

		}

	}

	else {
		printf("This is not a leap year\n");

	}
	printf("a.Using logical operator\n");
	printf("Enter the year\n");
	scanf("%d", &year);
	if (year % 100 == 0 && year % 400 == 0 || year % 4 == 0) {

		printf("This is a leap year\n");

	} else {
		printf("This is  not a leap year\n");

	}

	printf("a.Using conditional operator\n");
	printf("Enter the year\n");
	scanf("%d", &year);
	(year % 4 == 0) ?
			(year % 100 == 0) ?
					(year % 400 == 0) ?
							printf("This is a leap year\n") :
							printf("This is not a leap year\n")
					:printf("This is a leap year\n")
			:printf("This is  not a leap year\n");

	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : assign2-II-1.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum month {
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
} mon;
int main(void) {
	int year, choice;
	mon m;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter the month number\n");
	scanf("%d", (int *) &m);
	switch (m) {

	case Jan:
		printf("31 days\n");
		break;
	case Feb:
		printf("29 or 28 days\n");
		break;
	case Mar:
		printf("31 days\n");
		break;
	case Apr:
		printf("30 days\n");
		break;
	case May:
		printf("31 days\n");
		break;
	case Jun:
		printf("30 days\n");
		break;
	case Jul:
		printf("31 days\n");
		break;
	case Aug:
		printf("31 days\n");
		break;
	case Sep:
		printf("30 days\n");
		break;
	case Oct:
		printf("31 days\n");
		break;
	case Nov:
		printf("30 days\n");
		break;
	case Dec:
		printf("31 days\n");
		break;
	default:
		printf("Enter the valid month no.\n");
		break;
	}
	printf("Enter the year\n");
	scanf("%d", &year);
	if ((year % 400 == 0) && (year % 100 == 0) || (year % 4 == 0)) {
		choice = 1;
	} else {
		choice = 2;
	}

	switch (choice) {
	case 1:
		printf("366 days");
		break;
	case 2:
		printf("365 days");
		break;
	}
	return EXIT_SUCCESS;
}

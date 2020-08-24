#include <stdio.h>
#include <stdlib.h>

enum mounth {
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
} mon;
int main(void) {
	int m, year;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("-----Using if-else-----\n");
	printf("Enter the month number\n");
	scanf("%d", &m);

	/*if (month % 2 == 0) {
	 if (month == 2) {
	 days=29;
	 printf("29 or 28");

	 } else {
	 days=30;
	 printf("30");

	 }
	 } else {
	 days=31;
	 printf("31");

	 }
	 */
	if (m == Jan) {
		printf("31 days\n");
	} else if (m == Feb) {
		printf("28 or 29 days\n");
	} else if (m == Mar) {
		printf("31 days\n");
	} else if (m == Apr) {
		printf("30 days\n");
	} else if (m == May) {
		printf("31 days\n");
	} else if (m == Jun) {
		printf("30 days\n");
	} else if (m == Jul) {
		printf("31 days\n");
	} else if (m == Aug) {
		printf("31 days\n");
	} else if (m == Sep) {
		printf("30 days\n");
	} else if (m == Oct) {
		printf("31 days\n");
	} else if (m == Nov) {
		printf("30 days\n");
	} else if (m == Dec) {
		printf("31 days\n");
	}
	printf("Enter year\n");
	scanf("%d", &year);
	if (year % 400 == 0) {
		printf("366 days\n");
	} else if (year % 100 == 0) {
		printf("365 days\n");
	} else if (year % 4 == 0) {
		printf("366 days\n");
	} else {
		printf("365 days\n");
	}
	printf("-------Using logical operator-------\n");
	printf("Enter the month year\n");
	scanf("%d", &m);
	if (m == Jan || m == Mar || m == May || m == Jul || m == Aug || m == Aug
			|| m == Oct || m == Dec) {
		printf("31 days\n");
	} else if (m == Feb) {
		printf("28 or 29 days\n");
	} else {
		printf("30 days\n");
	}
	printf("Enter the year\n");
	scanf("%d", &year);
	if ((year % 400 == 0) && (year % 100 == 0) || (year % 4 == 0)) {
		printf("366 days");
	} else {
		printf("365 days");

	}
	return EXIT_SUCCESS;
}

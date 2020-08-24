/*
 ============================================================================
 Name        : assign2-II-4.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int dd, mm, yy, month_odd_days = 0, total_odd_days, day_odd_days;
	int leap_years = 0, non_leap_years = 0, i, choice;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("\nInput the Current Date in Numbers\n");
	printf("Date:\t");
	scanf("%d", &dd);
	printf("Month:\t");
	scanf("%d", &mm);
	printf("Year:\t");
	scanf("%d", &yy);
	if (dd > 31 || mm > 12) {
		printf("\nPlease Enter the Correct Date\n");
		exit(0);
	}
	for (i = 1; i <= yy - 1; i++) {
		if (i % 4 == 0) {
			if (i % 100 == 0) {
				if (i % 400 == 0) {
					leap_years++;
				} else {
					non_leap_years++;
				}
			} else {
				leap_years++;
			}
		}
		else {
			non_leap_years++;
		}
	}
	printf("leap year =%d and non leap year=%d ", leap_years, non_leap_years);

	switch (mm - 1) {
	case 12: {
		month_odd_days += 31 % 7;
	}
	case 11: {
		month_odd_days += 30 % 7;
	}
	case 10: {
		month_odd_days += 31 % 7;
	}
	case 9: {
		month_odd_days += 30 % 7;
	}
	case 8: {
		month_odd_days += 31 % 7;
	}
	case 7: {
		month_odd_days += 31 % 7;
	}
	case 6: {
		month_odd_days += 30 % 7;
	}
	case 5: {
		month_odd_days += 31 % 7;
	}
	case 4: {
		month_odd_days += 30 % 7;
	}
	case 3: {
		month_odd_days += 31 % 7;
	}
	case 2: {
		if (yy % 4 == 0) {
			if (yy % 100 == 0) {
				if (yy % 400 == 0) {
					month_odd_days += 29 % 7;
				} else {
					month_odd_days += 28 % 7;
				}
			} else {
				month_odd_days += 29 % 7;
			}

		}

		else {
			month_odd_days += 28 % 7;
		}
	}

	case 1: {
		month_odd_days += 31 % 7;
		break;
	}

	}
	day_odd_days = dd % 7;
	total_odd_days = (2 * leap_years) + non_leap_years + month_odd_days
			+ day_odd_days;
	/*printf("leap year =%d ,non leap year=%d ,odd days=%d , odd days for day=%d ,total odd days=%d",
			leap_years, non_leap_years, month_odd_days, day_odd_days,
			total_odd_days);*/
	choice = total_odd_days % 7;
	printf("choice =%d", choice);
	switch (choice) {
	case 1:
		printf("\nDay:\tMonday\n");
		break;
	case 2:
		printf("\nDay:\tTuesday\n");
		break;
	case 3:
		printf("\nDay:\tWednesday\n");
		break;
	case 4:
		printf("\nDay:\tThursday\n");
		break;
	case 5:
		printf("\nDay:\tFriday\n");
		break;
	case 6:
		printf("\nDay:\tSaturday\n");
		break;
	case 7:
		printf("\nDay:\tSunday\n");
		break;
	}

	return EXIT_SUCCESS;
}

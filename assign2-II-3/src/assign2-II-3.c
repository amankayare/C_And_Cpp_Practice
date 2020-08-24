/*
 ============================================================================
 Name        : assign2-II-3.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void) {
	int dept_no, emp_id;
	char dept_name[11], dest[17], dsgn_code;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter employee id \n");
	scanf("%d", &emp_id);
	printf("Enter department no.\n");
	scanf("%d", &dept_no);
	printf("Enter designation code \n");
	scanf("%*c%c", &dsgn_code);

	switch (dsgn_code) {
	case 'M':
		strcpy(dest, "Manager");
		break;
	case 'S':
	    strcpy(dest, "Supervisor");
		break;
	case 's':
		strcpy(dest, "Security Officer");
		break;
	case 'C':
		strcpy(dest, "Clerk");
		break;
	default:
		printf("invalid designation code\n");
		break;
	}
	switch (dept_no) {
	case 10:
		strcpy(dept_name, "Marketing");
		break;
	case 20:
		strcpy(dept_name, "Management");
		break;
	case 30:
		strcpy(dept_name, "Sales");
		break;
	case 40:
		strcpy(dept_name, "Designing");
		break;
	default:
		printf("invalid department no.\n");
		break;
	}
	printf("Employee with employee id %d is working in %s department as %s",
			emp_id, dept_name, dest);

	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : practiceMultipleFileProgram.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

void test(void);
int global;
int global_extern_inside_fun=100;
int main(void) {
	/*
	 printf("%d\n", n);
	 test();
	 printf("%d\n", sum(10, 20));
	 */


	// printf("%d",sum(10,20));
	print_global();

	return EXIT_SUCCESS;
}
void test() {

	printf("In test global=%d\n", 2);
}

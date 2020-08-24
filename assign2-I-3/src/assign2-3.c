/*
 ============================================================================
 Name        : assign2-3.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter a number");
	scanf("%d", &num);
	if(num>0)
		printf("%d is +ve number",num);
	else if(num<0)
		printf("%d is -ve number",num);
	else
		printf("Number is zero");

	return EXIT_SUCCESS;
}

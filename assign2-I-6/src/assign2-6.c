/*
 ============================================================================
 Name        : assign2-6.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, rem, rev = 0,number;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter a number");
	scanf("%d", &num);
	number=num;

	while (num != 0) {
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	printf("%d", rev);

	if (number == rev){
		printf(" is palindrome");

	}else{
		printf(" is not palindrome");

	}


	return EXIT_SUCCESS;
}

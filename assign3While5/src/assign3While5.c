/*
 ============================================================================
 Name        : assign3While5.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 1, num, fact = 1;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter a number\n");
	scanf("%d", &num);
	while (num > 0) {
		fact = fact * num;
		if(num==1){
			printf("%d=%d", num,fact);

		}else{
			printf("%d*", num);

		}

		num--;
	}

	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : assign3While7.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i = 1, num;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter a number\n");
	scanf("%d", &num);
	while (i <= num) {
		if (num % i == 0) {
			if (i < num / i)
				printf("%dx%d=%d\n", i, num / i, num);
			i++;
		}
	else {
		i++;
		continue;
	}
}
return EXIT_SUCCESS;
}


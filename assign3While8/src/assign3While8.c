/*
 ============================================================================
 Name        : assign3While8.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=1, num1, num2, count=1;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter two numbers\n");
	scanf("%d%d", &num2, &num2);

	while (i > 0) {
		if (count == 0 ) {
			printf("gcd=%d\n", num1);
			printf("---------END----------\n");

			break;
		} else {
			count = num1 % num2;
			num1 = num2;
			num2 = count;
			printf("count=%d\n",count);
			printf("num1=%d\n",num1);
			printf("num2=%d\n",num2);
			printf("i=%d\n",i);

			i++;
			printf("-------------------\n");

		}
	}
	return EXIT_SUCCESS;
}

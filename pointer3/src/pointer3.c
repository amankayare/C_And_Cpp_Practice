/*
 ============================================================================
 Name        : pointer3.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void calculate(int, int, int *, int * , int *,int *);
int main(void) {
	int num1 = 20, num2 = 10, sum, mul, sub, div;
	calculate(num1, num2,&sum,&sub,&mul,&div);
	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%d\n", div);

	return EXIT_SUCCESS;

}
void calculate(int a, int b, int *sum, int *sub, int *mul,int *div) {
	printf("in the cal...\n");

	*sum = a + b;
	printf("*sum=%d\n", *sum);

	*sub = a - b;
	printf("*sub=%d\n", *sub);

	*mul = (a) * (b);
	printf("*mul=%d\n", *mul);

	*div = a / b;
	printf("*div=%d\n", *div);
	printf("------------------\n");


}

/*
 ============================================================================
 Name        : callByvalue&ref.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void swapCallByValue(int, int);
void swapCallByRef(int *, int *);

int main(void) {
	int num1 = 10, num2 = 20;
	printf("before swap num1=%d num2=%d\n", num1, num2);
	//swapCallByValue(num1, num2);
	swapCallByRef(&num1, &num2);
	printf("after swap num1=%d num2=%d\n", num1, num2);

	return EXIT_SUCCESS;
}
void swapCallByRef(int *a, int *b) {
	int *temp;
	*temp = *a;
	*a = *b;
	*b = *temp;

}

void swapCallByValue(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

}

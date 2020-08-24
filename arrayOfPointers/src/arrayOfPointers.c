/*
 ============================================================================
 Name        : arrayOfPointers.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *arr[] = { "aman", "kayare", "nilesh", "patidar" };

	printf("%s\n", arr[0]); // with %s we need to give a simple arr[0] to get the value at arr[0]
	printf("%c\n", *arr[0]); //if we want to get only first character of arr[0] then use %c and *arr[0] to get 1st character only
	int i;
	for (i = 0; i < 4; i++) {

		printf("arr[%d]=%s\t", i, arr[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {

		printf("arr[%d]=%c\t", i, *arr[i]);
	}
	printf("\n");

	printf("*arr[0]+2=%c\n",*arr[0]+2);//resolve (*arr[0])+2 =a+2=>c
	return EXIT_SUCCESS;
}

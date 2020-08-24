/*
 ============================================================================
 Name        : insertionSort.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define fun(a,b) a##b
int main(void) {

 int a=100,b=200,ab=4;

 printf("%d,",fun(a,b));

 printf("%d ,",ab + fun(a,b));

 printf("%d ,",fun(200,100));

 printf("%d ,",ab + fun(200,100));

	return EXIT_SUCCESS;
}

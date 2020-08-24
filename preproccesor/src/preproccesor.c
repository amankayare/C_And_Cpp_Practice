/*
 ============================================================================
 Name        : preproccesor.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define STRING "Aman Kayare"

#define INC(n) n+1
#define SUM(a,b) a+b
#define SQR(a) a*a
#define fun(a,b) (a+a)*(b+b)
#define SIZE 5
#define PRINT(n) printf("value of n=%d\n",n)
#define PRINTSTRING(n) printf(n)// we need to give input in (" ") to print string
#define PRINT_STRING(n) printf(#n)//#n will convert n into string literal no need to give input in (" ")
#define CON(a,b) a##b
#define PRINT_CON(a,b) printf("\n%s\n",CON(a,b))//CON(a,b) replace by upper directive a##b and then print the string with name ar/br

int main(void) {
	int arr[SIZE];
	printf("# include preprocessor\n");
	printf("Value of PI =%.2f\n", PI);
	printf("Value of STRING =%s\n", STRING);
	printf("Value of NAME(n) =%d\n", INC(6));
	printf("Value of SUM(a,b) =%d\n", SUM(20, 10));
	printf("Value of SQR(a) =%d\n", SQR(10));
	printf("Value of fun(a,b) =%d\n", fun(10, 20));
	printf("Size of array =%d\n", sizeof(arr));
	PRINT(10);
	PRINTSTRING("This is string\n");
	PRINT_STRING(This is String);
	char *ar = "1st String Literal";
	char *br = "2nd String literal";
	PRINT_CON(a, r);
	PRINT_CON(b, r);

	/*  Conditional compilation
	 #if
	 #else
	 #elif
	 #ifndef
	 #undef
	 #endif
*/
/*
#define VERSION 3

# if VERSION == 1
	printf("version 1");
# elif VERSION ==2
	printf("version 2");
# elif VERSION ==3
	printf("version 3");
#endif

printf("-----------");
*/
/*
#define JAVA 10
#ifndef JAVA
	printf("javajava");
#else
	printf("NO javajava");
#endif

printf("-----------");
*/
/*
#define JAVA 10
#undef JAVA
#ifndef JAVA
	printf("javajava");
#else
	printf("NO javajava");
#endif

printf("-----------");
*/
/*#define C 10

#ifdef C
	printf("CC\n");
#else
	printf("NO CC\n");
#endif
printf("-----------");
*/
/*
#ifdef CPP
	printf("CPP\n");
#else
	printf("NO CPP\n");
#endif
#define CPP 10
*/


	return EXIT_SUCCESS;
}

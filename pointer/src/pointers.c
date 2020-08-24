/*
 ============================================================================
 Name        : pointers.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num = 10;
	int *p = &num;
	printf(" num = %d\n", num); //num=10
	printf(" p = %u\n", p); //p=&num ,This will print &num
	printf(" num using *p = %d\n", *p); //*(&num)
	printf(" &num = %u\n", &num); //&num
	printf(" &p = %u\n", &p); //&p

	printf("size of *p = %d\n", sizeof(*p)); //it gives size of data type of var(p)
	printf("size of p = %d\n", sizeof(p)); // gives size of pointer i.e = 8
	printf("size of *p = %d\n", sizeof(int *)); //gives size of pointer i.e = 8

	printf("---------------------------------\n");

	char a = 'A';
	char *ch = &a;
	char **ch_ch = &ch;
	char ***ch_ch_ch = &ch_ch;
	printf("a=%c\n", a);
	printf("&a=%u\n", &a);

	printf("ch = %u\n", ch);
	printf("&ch = %u\n", &ch);
	printf("*ch = %c\n", *ch); //*(&a)=A
	printf("ch_ch = %u\n", ch_ch); //&ch
	printf("&ch_ch = %u\n", &ch_ch);
	printf("*ch_ch = %u\n", *ch_ch); //*(&ch_ch)
	printf("**ch_ch = %c\n", **ch_ch); //*(&ch_ch)
	printf("&ch_ch_ch = %u\n", &ch_ch_ch); //
	printf("***ch_ch_ch = %c\n", ***ch_ch_ch); //
	printf("**ch_ch_ch = %c\n", ***ch_ch_ch); //

	return EXIT_SUCCESS;
}

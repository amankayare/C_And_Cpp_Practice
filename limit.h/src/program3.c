/*
 ============================================================================
 Name        : program3.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <limits.h>

int main(void) {

	 printf("Display range of data types Using limits.h header file\n");
	 printf("\n  data types \t\t Size     Format Specifier     Lower Limit Upper Limit \n");
	 printf("\n  int \t\t\t %-10d %%d\t\t %-12d\n ", sizeof(int),INT_MIN,INT_MAX);
	 printf("\n Unsigned char \t\t %-10d %%c\t\t 0 to %-12d\n",sizeof(unsigned char),UCHAR_MAX);
	 printf("\n signed char \t\t %-10d %%c\t\t %d to %-12d\n",sizeof(unsigned char),SCHAR_MIN,SCHAR_MAX);
	 printf("\n Short int \t\t %-10hd %%hd\t\t %d to %-12d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
	 printf("\n Unsigned short int \t %-10u %%u\t\t0 to %-12u\n",sizeof(unsigned short int),USHRT_MAX);


	return 0;
}

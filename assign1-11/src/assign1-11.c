/*
 ============================================================================
 Name        : assign1-11.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main(void) {
printf("%12s %13s %23s %21s","Datatype","Size","FormatSpecifier","Range\n");
printf("%10s %14d %17s %22d to %d\n","char",sizeof(char),"%c",CHAR_MIN ,CHAR_MAX);
printf("%10s %14d %17s %22d to %d\n","u-char",sizeof(unsigned char),"%c",0 ,UCHAR_MAX);
printf("%10s %14d %17s %22d to %d\n","s-int",sizeof(short int),"%hd",SHRT_MIN,SHRT_MAX);
printf("%10s %14d %17s %22d to %d\n","u-s-int",sizeof(unsigned short int),"%hu",0 ,USHRT_MAX );
printf("%10s %14d %17s %22d to %d\n","int",sizeof(int),"%d",INT_MIN ,INT_MAX);
printf("%10s %14d %17s %22d to %u\n","u-int",sizeof(unsigned int),"%u",0 ,UINT_MAX);
printf("%10s %14d %17s %22d to %d\n","l-int",sizeof(long int),"%ld",LONG_MIN,LONG_MAX);
printf("%10s %14d %17s %22d to %u\n","u-l-int",sizeof(unsigned long int),"%lu",0,ULONG_MAX );

	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : program2.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 float si,prin,roi,noy;
 setvbuf(stdout,NULL,_IONBF,0);
 printf("Enter Principle ::");
 scanf("%f", &prin);
 printf("Enter Rate of Interest ::");
 scanf("%f", &roi);
 printf("Enter Number of years ::");
 scanf("%f", &noy);
 si=(float)prin*roi*noy/100;
 printf("Principle =%f\n Simple Interest =%f",prin,si);
	return 0;
}

/*
 ============================================================================
 Name        : staticVariable.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void print(void);

int main(void) {

	print();
	print();
	print();
	print();

return EXIT_SUCCESS;
}
void print(void){
	static int name=0;
	printf("This is print function having static=%d\n",name);
	name++;
	printf("This is print function having name=%d\n",name);



}

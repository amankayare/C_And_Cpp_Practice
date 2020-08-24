/*
 * registerVariable.c
 *
 *  Created on: 17-Oct-2019
 *      Author: Black Bird
 */

/*
 ============================================================================
 Name        : registerVariable.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
register int i;
for(i=0;i<100;i++){
	printf("register variable =%d\n",i);
}
return EXIT_SUCCESS;
}


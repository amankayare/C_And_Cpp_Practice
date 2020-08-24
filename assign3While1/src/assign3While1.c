/*
 ============================================================================
 Name        : assign3While1.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	int no,i=1;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter the character\n");
	scanf("%c", &ch);
	printf("Enter the no.\n");
	scanf("%d", &no);
	while(i<=no){
		printf("%c",ch);
i++;
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : assign1-3.c
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
int num;
setvbuf(stdout, NULL, _IONBF, 0);
printf("Enter a character\n");
scanf("%c",&ch);
printf("ASCII value in Decimal=%d\n",ch);
printf("ASCII value in Hexadecimal=%x\n",ch);
printf("ASCII value in Octal=%o\n",ch);
printf("Enter a ASCII value\n");
scanf("%d",&num);
printf("Character value of %d=%c\n",num,num);

return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : assign1-2.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int num;
setvbuf(stdout, NULL, _IONBF, 0);

printf("Enter a number\n");
scanf("%d",&num);
printf("Character value of %d =%c\n",num,num);
printf("Decimal value of %d =%d\n",num,num);
printf("Octal value of %d =%o\n",num,num);
printf("Hexadecimal value of %d =%x\n",num,num);


return 0;
}

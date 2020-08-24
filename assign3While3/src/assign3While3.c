/*
 ============================================================================
 Name        : assign3While3.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rev = 0, rem, num, number, sum = 0;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("a.Sum of digit of  no. using while\n");
	 scanf("%d", &num);
	 while (num != 0) {
	 rem = num % 10;
	 rev = rev * 10 + rem;
	 num /= 10;
	 }
	 while (rev > 0) {
	 rem = rev % 10;
	 printf("%d", rem);
	 sum = sum + rem;
	 rev /= 10;
	 if (rev == 0) {
	 printf("=%d\n", sum);
	 } else {
	 printf("+");
	 }
	 }
	 printf("b.Reverse a no. using while\n");
	 printf("Enter the no. to reverse\n");
	 scanf("%d", &num);
	 number = num;
	 while (num != 0) {

	 rem = num % 10;
	 rev = rev * 10 + rem;
	 num /= 10;
	 }
	 printf("reverse of %d is %d\n", number, rev);
	 printf("c.Check for numeric palindrome or not using while\n");
	 printf("Enter the no. to check palindrome\n");
	 scanf("%d", &num);
	 number = num;
	 rev = 0;
	 while (num != 0) {

	 rem = num % 10;
	 rev = rev * 10 + rem;
	 num /= 10;
	 }
	 if (number == rev) {
	 printf("no. is palindrome\n");
	 } else {
	 printf("no. is not a palindrome\n");

	 }
	printf("d.Check for numer is Armstrong no or not using while\n");
	printf("Enter the no. to check Armstrong or not\n");
	scanf("%d", &num);
	int pow = 0;
	sum = 0;
	number=num;
	while (num > 0) {
		rem = num % 10;
		pow = (rem * rem * rem);
		num /= 10;
		sum = sum + pow;

	}
	if(number==sum){
		printf("Number is armstrong");
	}else{
		printf("Number is not armstrong");

	}
	return EXIT_SUCCESS;
}

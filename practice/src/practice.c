/*
 ============================================================================
 Name        : practice.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int, int);
int sub(int, int);
int mul(int one, int two);
void hello(void);
void test(char);
void nilesh(void);
int main(void) {
	/*int i,num_one=10,num_two=20;
	 i=mul(num_one,num_two);
	 printf("%d",i);*/
//hello();//on calling a function having return type void you can not pass void as a argument hello(void)X;
//test('S');
	nilesh();
  	return EXIT_SUCCESS;
}
void test(char name) {
	printf("char is =%c", name);
}
void hello(void) {
	printf("hello nilesh");

}
int sum(int num1, int num2) {
	return num1 + num2;
}
int sub(int num1, int num2) {
	return num1 - num2;
}
int mul(int num1, int num2) {
	return num1 * num2;
}
void nilesh(void) {

	printf("nilesh\n");
	void aman(void) {
		printf("aman\n");

	}
	aman();

}

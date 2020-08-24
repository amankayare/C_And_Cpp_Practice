/*
 ============================================================================
 Name        : test.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>// <--malloc present here
#define SIZE 5

int main(void) {

	int ar[2];

	int arr[SIZE] = { 1, 2, 3 };
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%d,", arr[i]);

	}
	printf("\n------------Dynamic memory allocation-----------\n");
	printf("---void *malloc(size_t size)--\n");
	int *ptr;
	ptr = (int *) malloc(sizeof(int)); //dynamic memory allocation for int similar can be done with char,float,double.....
	if (ptr == NULL) {
		printf("malloc function failed");
		exit(-1);
	}
	int *ptr2;
	ptr2 = ptr;
	*ptr = 100; //100 assigned to dynamic memory

	printf("value of dynamic allocated memory = %d\n", *ptr);
	printf("address of dynamic allocated memory =%u\n", ptr);
	printf("address of ptr = %u\n", &ptr);
	printf("value of ptr2 = %d\n", *ptr2);
	free(ptr);
	ptr = NULL; //to avoid dangling pointer
	printf("value of ptr2 = %d\n", *ptr2); // if ptr = NULL; from previous line is not written then ptr2 is known as dangling pointer otherwise not.

	/*Dynamic allocated var/array ------> HEAP MEMORY
	 Local var/array -------->STACK MEMORY
	 Global and Static variables------>DATA SECTION
	 */
	int *array;
	array = (int *) malloc(sizeof(int) * SIZE);
	if (array == NULL) {
		printf("malloc failed\n");
	}
	int j;
	for (j = 0; j < SIZE; j++) {
		printf("Enter array[%d]:", j);
		scanf("%d", array + j); //only scanf("%d",array+j);is allowed &array+j and array[j] is not allowed in malloc
	}
	for (j = 0; j < SIZE; j++) {
		printf(" array[%d]:=%d\n", j, *(array + j)); //or *(array+j)
	}
	free(array);
	printf(
			"-----------------------------------------------------------------------------------------\n");
	{
		printf("---void *calloc(size_t nmenb,size_t size)--\n");
		int *ptr;
		ptr = (int *) calloc(5, sizeof(int));
		if (ptr == NULL) {
			printf("malloc function failed");
			exit(-1);
		}
		int *ptr2;
		ptr2 = ptr;
		*ptr = 100;

		printf("value of dynamic allocated memory = %d\n", *ptr);
		printf("address of dynamic allocated memory =%u\n", ptr);
		printf("address of ptr = %u\n", &ptr);
		printf("value of ptr2 = %d\n", *ptr2);
		free(ptr);
		ptr = NULL; //to avoid dangling pointer
		printf("value of ptr2 = %d\n", *ptr2); // if ptr = NULL; from previous line is not written then ptr2 is known as dangling pointer otherwise not.

	}
	printf(
			"Apart from signature of malloc and calloc there is another main differnce is that their default values are different i.e. (malloc=>garbage value)&(calloc=>0)\n");



	return EXIT_SUCCESS;

}


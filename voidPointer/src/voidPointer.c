/*
 ============================================================================
 Name        : voidPointer.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("------------Void *pointer-----------\n");
	{

		printf("# void *ptr can store address of any data type of variable\n");
		int num = 10;
		char ch = 'k';
		float fl = 10.20;
		double dbl = 1020.00550;
		void *ptr1 = &num;
		void *ptr2 = &ch;
		void *ptr3 = &fl;
		void *ptr4 = &dbl;

	}
	{
		printf(
				"# during assignment of address into void ptr does not need any external type casting\n");
		int num = 10;
		void * ptr = &num; // no need to write [ void *ptr =&(int *)num
		printf("%d\n", *(int *) ptr);
	}
	{
		printf(
				"# but when we use value at operator (*ptr) to get value we need to explicitly type cast like *(int *)ptr\n");
		int num = 20;
		void *ptr = &num;
		//int no=*ptr; Not allowed need to type cast explicitly
		int no = *(int *) ptr; //printf("%d\n",*ptr) is not allowed need to type cast explicitly
		printf("%d\n", *(int *) ptr); //printf("%d\n",*ptr) is not allowed need to type cast explicitly

	}
	{
		printf(
				"# data type is unknown of void *ptr ,scale factor of void is not defined therefore arithmatic operation cant be performed\n");
		int num1 = 10, num2 = 10;
		int arr[5] = { 1, 2, 3, 4, 5 };
		void *arrPtr = arr;
		void *ptr1 = &num1;
		void *ptr2 = &num2;
		printf("&arrPtr=%u\n", &arrPtr);
		// printf("arrPtr++=%u\n",arrPtr++);// *(ptr1++)or *ptr++ is not allowed need to type cast like *(int *)ptr++
		printf("arrPtr++=%d\n", *(int *) arrPtr++); //allowed gives value at next to base address
		//printf("arrPtr+1=%u\n", arrPtr + 1); // *(ptr1+1)or *ptr+1 is not allowed need to type cast like *(int *)ptr+1
		printf("arrPtr+1=%d\n", *(int *) arrPtr + 1); //allowed gives value at next to base address

		/*arithmatic operation is not allowed for void *ptr
		 printf("*ptr1+*ptr2",*ptr1+*ptr2);
		 */
	}
	{
		printf("");
		int num = 10;
		void *ptr = &num;
	}
	return EXIT_SUCCESS;
}

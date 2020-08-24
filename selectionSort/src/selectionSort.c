/*
 ============================================================================
 Name        : SelectionSort.c
 Author      : nilesh patidar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(void) {

	printf("Selection Sort\n");

	int arr[SIZE] = { 550, 710, 340, 260, 130 };
	int slt;
	int cmp;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Before sort\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	//slt --->select
	//cmp --->compare
	for (slt = 0; slt < SIZE - 1; slt++) { // this outer loop is used to select element
// loop works till SIZE-1 because last element does not have next elements to compare
		for (cmp = slt + 1; cmp <= SIZE; cmp++) { // this inner loop is used to compare selected element with next elements till last
//loop starts with slt+1 because slt is already selected so comparision starts with element next to slt
			if (arr[slt] > arr[cmp]) {
				int temp;
				temp = arr[slt];
				arr[slt] = arr[cmp];
				arr[cmp] = temp;
			}
		}
	}
	printf("After sort\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	return EXIT_SUCCESS;
}

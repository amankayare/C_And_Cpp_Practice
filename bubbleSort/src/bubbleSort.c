/*
 ============================================================================
 Name        : BubbleSort.c
 Author      : nilesh patidar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int outer = 0;
int inner = 0;
int vacant = 0;
int swap=0;
int main(void) {

	printf("Bubble Sort\n");

	int arr[SIZE] = { 10, 20, 30, 50, 60 };

	int j;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Before sort\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		outer++;
		for (j = 0; j < SIZE - 1; j++) {
			inner++;
			if (arr[j] > arr[j + 1]) {
				swap++;
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}else{
				vacant++;
			}
		}
	}
	printf("After sort\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("outer=%d\n",outer);
	printf("inner=%d\n",inner);
	printf("vacant=%d\n",vacant);
	printf("swap=%d\n",swap);

	return EXIT_SUCCESS;
}

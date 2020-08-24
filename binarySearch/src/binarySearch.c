/*
 ============================================================================
 Name        : datastructure1.c
 Author      : nilesh patidar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
#define TRUE 1
#define FALSE 0
int binary_search(int arr[], int key);
int main(void) {
	printf("BINARY SERARCH\n");

	int key;
	int arr[SIZE] = { 10, 20, 30, 40, 50, 60 };
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a key\n");
	scanf("%d", &key);
	int position = binary_search(arr, key);
	if (position) {
		printf("element is found at %d position\n", position + 1);
	} else {
		printf("element not found\n");

	}
	return EXIT_SUCCESS;
}
int binary_search(int arr[SIZE], int key) {

	int left = 0;
	int right = SIZE - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (arr[mid] == key) {
			return mid;
		}
		if (arr[mid] > key) {
			right = mid - 1;
		}
		if (arr[mid] < key) {
			left = mid + 1;
		}
	}
	return FALSE;
}

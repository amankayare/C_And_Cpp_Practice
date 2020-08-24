#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
#define TRUE 1
#define FALSE 0
int linear_search(int arr[], int key);
int main(void) {
	printf("Linear search\n");

	int key;
	int arr[SIZE] = { 12, 45, 85, 96, 71, 50 };
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a key\n");
	scanf("%d", &key);
	int position = linear_search(arr, key);
	if (position) {
		printf("element is found at %d position\n", position + 1);
	} else {
		printf("element not found\n");

	}
	return EXIT_SUCCESS;
}
int linear_search(int arr[SIZE], int key) {

	int index;

	for (index = 0; index < SIZE; index++) {
		if (arr[index] == key) {

			return index;
		}
	}
	return FALSE;
}

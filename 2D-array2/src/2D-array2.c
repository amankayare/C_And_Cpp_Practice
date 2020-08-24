/*
 ============================================================================
 Name        : 2D-array2.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3
void accept_array(int arr[][COL], int row, int col);
void print_array(int arr[][COL], int row, int col);
void add_matrix(int arr1[][COL], int arr2[][COL], int res[][COL]);

int main(void) {

	printf("----2D Array with functions----\n");
	int arr[ROW][COL];
	accept_array(arr, 2, 3);
	print_array(arr, 2, 3);
	int arr1[ROW][COL];
	int arr2[ROW][COL];
	int res[ROW][COL];
	printf("-------Addition of two matrix------\n");

	printf("Accept 1st matrix\n");
	accept_array(arr1, 2, 3);
	printf("Print 1st matrix\n");
	print_array(arr1, 2, 3);

	printf("Accept 2nd matrix\n");
	accept_array(arr2, 2, 3);
	printf("Print 2nd matrix\n");
	print_array(arr2, 2, 3);

	printf("Addition of both matrix......................................................\n");
	add_matrix(arr1,arr2,res) ;
	printf("Print resultant matrix\n");
	print_array(res, 2, 3);

	return EXIT_SUCCESS;
}
void accept_array(int arr[][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("Enter arr[%d][%d]\n", i, j);
			/* & in scan is optional or not*/
			scanf("%d", &arr[i][j]);

		}
	}
}
void print_array(int arr[][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);

		}
	}

}
void add_matrix(int arr1[][COL], int arr2[][COL], int res[][COL]) {
	int i, j;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			res[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

}


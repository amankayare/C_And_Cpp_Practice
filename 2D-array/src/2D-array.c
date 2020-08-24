/*
 ============================================================================
 Name        : 2D-array.c
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

int main(void) {

	int arr[ROW][COL]; //2-d array declaration
//	int arr1[][];//without row,col size we can not declare 2d-array
	int arr1[ROW][COL] = { 1, 2, 3, 4, 5, 6 }; //1st way of initialization
	int arr2[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 } }; // another way of initialization with row col separation
	int arr3[ROW][COL] = { 1, 2 }; //similar to 1-d array partial initialization of 2-d array will make rest index '0'
	int arr4[][COL] = { 1, 2, 3, 4, 5, 6 }; //During initialization writing row size is optional
//	int arr5[][COL];//During declaration writing row & col size is compulsary
	printf("arr4[0][0]=%d\n", arr4[0][0]); //to access '0'th row and '0'th col index value
	printf("arr4[1][2]=%d\n", arr4[1][2]); //to access '1'st row and '2'nd col index value

	printf("---2D Array using pointer----\n");

	int mat[2][3] = { 1, 2, 3, 4, 5, 6 };
	int (*ptr)[COL] = mat; //here [3] is col size ,it is similar to **ptr
	int i, j;

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("mat[%d][%d]=%d\n", i, j, mat[i][j]);
		}
	}
	printf("---Access 2D Array element using pointer notation----\n");

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("mat[%d][%d]=%d\n", i, j, *(*(mat + i) + j)); // here i= row ,j=col and mat=base address
			// Generic formula
			//----------------
			// *(*(mat+row)+col)
			//----------------
		}
	}

	return EXIT_SUCCESS;
}

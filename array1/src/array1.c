/*
 ============================================================================
 Name        : array1.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int test_arr[5];
accept_array(test_arr);
print_array(test_arr);

int arr[5]={10,20,30,40,50};
int i;
int size=sizeof(arr)/sizeof(int);
printf("multiple printf\n");

printf("size =%d\n",size);
printf("arr[0] =%d\n",arr[0]);
printf("arr[1] =%d\n",arr[1]);
printf("arr[2] =%d\n",arr[2]);
printf("arr[3] =%d\n",arr[3]);
printf("arr[4] =%d\n",arr[4]);
printf("--------------------------\n");

printf("using for()\n");
for(i=0;i<size;i++){
	printf("arr[%d]=%d\n",i,arr[i]);
}
printf("--------------------------\n");

printf("Partial array print\n");
int arr2[5]={10,20};
int size2=sizeof(arr2)/sizeof(int);
printf("partial array size arr2=%d\n",size);

for(i=0;i<size2;i++){
	printf("arr2[%d]=%d\n",i,arr2[i]);
}
printf("--------------------------\n");


printf("base address of arr(arr)=%u\n",arr);
printf("base address of arr(&arr)=%u\n",&arr);
printf("base address of arr(&arr[0])=%u\n",&arr[0]);

printf("--------------------------\n");
printf("increment decrement of array is not allowed\n");
//arr++;


	return EXIT_SUCCESS;
}
void accept_array(int *array){
	printf("access array using pointers (ptr[i])\n");
	printf("In accept array using pointer\n");

	int i;
	for(i=0;i<5;i++){
		printf("Enter test_arr[%d]\n",i);
		scanf("%d",&array[i]);

	}
	printf("--------------------\n");

}
print_array(int * ptr_array){
	printf("access array using pointers (ptr[i])\n");
	printf("In print array using pointer\n");

	int i;
	for(i=0;i<5;i++){
		printf("test_arr[%d]=%d\n",i,ptr_array[i]);
	}
	printf("-------------------\n");
}


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char no = 10;
	char *ch = &no;

	int number = 19;
	int *ptr2 = &number;

	int num = 10;
	int *ptr = &num;
	/*
	 scale fator=sizeof(array type)
	 int scale factor =4
	 char scale factor =1
	 float scale factor =4
	 double scale factor =8*/

	printf("&num=%u\n", &num);
	printf("ptr=%u\n", ptr);
	printf("ptr2=%u\n", ptr2);

	printf("ptr+1=%u\n", ptr + 1);	//ptr+1 = ptr + scale factor of int
	printf("++ptr=%u\n", ++ptr);
	/*generic formula
	 ptr+n=ptr+(n*scale factor)*/
	printf("ptr+3=%u\n", ptr + 3);//ptr+3 = ptr+(3*scale factor of int);ptr+(3*4)

	printf("ch=%u\n", ch);
	printf("ch+3=%u\n", ch + 3);	//p+3=p+(3*1)

	//printf("ptr+ptr=%u\n", ptr+ptr); //we can not add two pointers because they may cause memory out error
	//printf("ptr*ptr=%u\n", ptr*ptr); //we can not multiply two pointers because they may cause memory out error
	//printf("ptr/ptr=%u\n", ptr/ptr); //we can not div two pointers because they may cause memory out error
	//printf("ptr%ptr=%u\n", ptr%ptr); //we can not take modulas of two pointers because they may cause memory out error

	int n1 = 19;
	int *p1 = &n1;
	int n2 = 19;
	int *p2 = &n2;
	printf("p1=%u\n", p1);
	printf("p2=%u\n", p2);

	printf("subraction of pointer p2-p1=%d\n", p2 - p1); //we can subtract two pointers because they always get address within the range of memory
	printf(
			"----------------------------------------------------------------------\n");

	printf("access array using internal pointers *(arr+i)\n");
	int arr[5] = { 10, 20, 30, 40, 50 };
	printf("base address or &arr[0]=%u\n", arr);
	printf("arr[0]=%d\n", arr[0]); //internally *(arr+0);
	printf("arr[1]=%d\n", arr[1]); //internally *(arr+1);
	printf("*arr=%d\n", *arr); //internally *(arr);
	/*
	 generic formula
	 arr[i]=*(arr+i)
	 */
	printf("print array using internal pointers (arr+i) or (i+arr)\n");
	int i;
	for (i = 0; i < 5; i++) {
		printf("arr[i]=%d\t", *(i + arr)); //three ways to print array= 1.arr[i]  2.ptr[i]  3.*(arr+i)
	}

/*   (arr + i) = (i + arr)
	 arr[i] = i[arr]
	 *arr[i] //indirectly it becomes value at value so not allowed
	 *(&arr[i])//allowed
*/
	int ar[5]={1,2,3,4,5};
	printf("*(&arr[0])=%d\n",*(&ar[0]));
	//printf("*(ar[0])=%d",*(ar[0])); *ar[i]-this is not allowed
	printf("&ar=%u\n",&ar);
	printf("&ar+1=%u\n",&ar+1);//on &arr+i the scale factor will be the size of array =arr+(i*size of array)


	return EXIT_SUCCESS;
}

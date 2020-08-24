/*
 ============================================================================
 Name        : 2D-array3.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {

	printf("------------2D-array with Char/String-------------\n");
	char name[3][7] = { "aman", "nilesh", "tata" }; // col size 7 because max name length is 6+'\0'=7
	int i;
	for (i = 0; i < 3; i++) {
		printf("name[%d]=%s\n", i, name[i]); //In 1-D array we can print string with %s using base address similarly we can do with 2-D array
	}
	// name[0] ==> In 2d array this will represent base address of '0'th row
	printf("------------2D-array arithmatic-------------\n");

	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	/*

	 <--------------Row 1------------><---------------Row 2------------ -->
	 ______________________________________________________________________
	 | scale factor                   |                                   |
	 |  <-------->                    |     <-col1--|--col2--|--col3->    |
	 |  of element                    |                                   |
	 |  ___________________________   |     __________________________    |
	 |  |        |       |        |   |     |       |       |        |    |
	 |  |   1    |   2   |   3    |   |     |   4   |   5   |    6   |    |
	 |  |________|_______|________|   |     |_______|_______|________|    |
	 |  100      104     108      112 |     112     116     120      124  |
	 |  <---scale factor of row--->   |                                   |
	 | _______________________________|___________________________________|
	 100                              112                                 124
	 <-------------------------scale factor of array------------------------>

	 arr[0]+1 => base address + (1*scale factor of element[data type])
	 arr+1 => base address + (1*scale factor of row)
	 &arr+1 => base address + (1*scalefactor of array)

	 */
	printf("base address of arr=%u\n", arr);
	printf("arr[0][0]=%d\n", arr[0][0]);
	printf("arr[0]+1=%d\n", *(arr[0] + 1)); //'0'th row + (1*scale factor of element i.e. 4 bytes)
	printf("arr[1]+2=%d\n", *(arr[1] + 2)); //'1'st row +2 [   *(base address of 1st row +(2*scale factor of element i.e. 4 bytes)  ]
	printf("-------------------------------------\n");

	printf("*arr+0=%u\n", *arr + 0); // increase by row scale factor and give address
	printf("(arr+1)=%u\n", (arr + 1)); // increase by row scale factor and give address
	printf("*(arr+1)=%u\n", *(arr + 1)); // increase by row scale factor and give address
	// (arr+1) = *(arr+1) = *arr+1 ==> both gives address
	printf("**(arr+1)=%d\n", **(arr + 1));// increase by 1*row scale factor and give its value
	printf("**(arr+0)=%d\n", **(arr + 0));// increase by 1*row scale factor and give its value

	printf("-------------------------------------\n");
	printf("&arr+0=%u\n", &arr + 0);// increase by 0*array scale factor and give its address
	printf("*&arr+0=%u\n", *&arr + 0);// increase by 0*array scale factor and give its address
	printf("*(&arr+0)=%u\n", *(&arr + 0));	// increase by 0*array scale factor and give its address
	printf("**(&arr+0)=%u\n", **(&arr + 0));// increase by 0*array scale factor and give its address

	printf("------------2D array with dynamic memory allocation-------------------------\n");

	/*

                 |dynamic location|
                 _________________         strcpy();              _________________
char * name      | A | M | A | N |    <===================    str | A | M | A | N |  <------- scanned string
100	|200| <-----> 200 201 202 203
104 |300| <---   _________________
108 |400|    |   | N | O | O | R |
      ^      ---->300 301 302 303
	  |          _________________
	  |          | G | E | E | T |
      ----------->400 401 402 403

	*/

	char * nam[3];
    char str[16];

    for(i=0;i<3;i++){

    	printf("Enter student nam[%d]\n",i);
        scanf("%s",str);
        nam[i]=(char *)malloc(strlen(str)+1);// +1 for '\0' character
        strcpy(nam[i],str);
    }

    for(i=0;i<3;i++){

        	printf("nam[%d]=%s\n",i,nam[i]);

        }

    for(i=0;i<3;i++){

        	free(nam[i]);
        	nam[i] = NULL;

        }


	return EXIT_SUCCESS;
}

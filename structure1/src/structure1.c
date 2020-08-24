/*
 ============================================================================
 Name        : structure1.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct student {

	int rollno;
	char name[10];
	float marks;
};

int main(void) {

	//struct student s1;//declaration of struct obj
	typedef struct student std; //typedef to struct
    printf("size of float=%d\n",sizeof(float));


	/* std s1;
	 std s2;*/


	std s1 = { 101, "aman", 80 };
	std s2 = { 102, "nilesh", 90 };

	/* To access data members of an structure we have two operator
	 1) dot operator [.]----------> to access normal variables
	 2) arrow operator [->]------> to access pointer variables

	 */

	//DBT// printf("size of s1 =%d\n",sizeof(s1));// size with 7 and 18 with arr is not working right// address of float is increase by 8???
	printf("name of the student s2 is %s\n", s2.name);
	printf("name of the student s1 is %s\n", s1.name);

	printf("roll no. of the student s2 is %d\n", s2.rollno);
	printf("roll no. of the student s1 is %d\n", s1.rollno);

	printf("marks of the student s2 is %.2f\n", s2.marks);
	printf("marks of the student s1 is %.2f\n", s1.marks);

	printf("The average marks of the students s1 and s2 is %.2f\n", (s1.marks+s2.marks)/2);

	printf("& of roll no of s2 is %u\n", &(s2.rollno));
	printf("& of name[] of s2 is %u\n", &(s2.name));
	printf("& of marks of s2 is %u\n", &(s2.marks));


/*

          	MEMORY LAYOUT OF STRUCTURE

    <--roll_no--><----name----><----marks---->
    ___________________________________________
    |            |              |              |
S1  |   4 byte   |   7 byte     |   4 byte     |
    |____________|______________|______________|
   100   int    104   char[7]  121   float    125

*/

std arr[2]={s1,s2};
//struct student arr[5];// another way to declare structure array
int i;
for(i=0;i<2;i++){

	printf("arr[%d]==> rollno=%d,name=%s,marks=%f\n",i,arr[i].rollno,arr[i].name,arr[i].marks);
}


	return EXIT_SUCCESS;
}

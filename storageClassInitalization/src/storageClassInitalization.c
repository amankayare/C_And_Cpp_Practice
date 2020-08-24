/*
 ============================================================================
 Name        : storageClassInitalization.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int num=10;
//int global=num; //initilazation of global var need to assign constant only
int global;
//global=num;// first declaration then assignment of global var in another global var is not allowed
//global=local1; we can not access local here
int num1=100;
int main(void) {
int local1=10,local2=20;
local1=local2;
//static int local_static_var=local1;//At the time of initialization of static var we can only assign constant to it
//static int local_static_var=10;//This will work fine
static int local_static_var;//first only declaration then assign of local var in static var will work fine
local_static_var=local1;
register int reg_var=local1;//this will work fine
local1=reg_var;// reg var in local will also works fine


return EXIT_SUCCESS;
}


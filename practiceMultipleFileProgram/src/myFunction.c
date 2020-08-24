#include<stdio.h>
extern int global=50; // this is working in eclipse but will not work in turbo

int sum(int num1, int num2) {
	printf("%d",global);
	return num1 + num2;
	//printf("%d\n",global_extern_inside_fun); global_extern_inside_fun variable have scope only in function print_global

}
void print_global() {
	extern int	global_extern_inside_fun;//we can declare extern global variable inside the function also
	//extern int global=50; locally we can not initiliaze and declare parallel
	printf("In print_global function\n");
	printf("%d\n",global_extern_inside_fun);//

	printf("before change=%d\n", global);
	global = 30;// we can also modify the global var
	printf("After change=%d\n", global);

}

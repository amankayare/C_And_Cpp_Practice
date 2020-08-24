/*
 ============================================================================
 Name        : cmdLine.c
 Author      : Aman Kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {
printf("%d\n",argc); //it gives the no of total arguments ;when no arguments is passed then one default argument is there which is file name
printf("%s\n",argv[0]);//file name argument is stored at argv[0] index default 1st argument
printf("%s\n",argv[1]);//argument 2nd
printf("%s\n",argv[2]);//argument 3nd
printf("----------\n");
printf("print argument using loop\n");
int i;
for(i=0;i<argc;i++){
	printf("%s\n",argv[i]);
}
int num1,num2,res;
char op;
if(argc!=4){
printf("Enter valid arguments in form:<operand1><operator><operend2>\n");
}
else{
	 num1=atoi(argv[1]);
	 num2=atoi(argv[3]);
	 op=*argv[2];

}

switch(op){

case '+':res=num1+num2;break;
case '-':res=num1-num2;break;
case '*':res=num1*num2;break;
default:printf("Invalid operator\n");

}
printf("res=%d\n",res);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : assign2-I-11.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter X and Y co-ordinates of cartesian system\n");
	scanf("%d %d",&x,&y);
	if(x==0 && y==0){
		printf("Origin\n");
	}else if(x==0 && y>0){
		printf("+ve Y-Axis\n");
	}else if(y==0 && x>0){
		printf("+ve X-Axis\n");
	}else if(y==0 && x<0){
		printf("-ve X-Axis\n");
	}else if(x==0 && y<0){
		printf("-ve Y-Axis\n");
	}else if(x>0 && y>0){
		printf("1st quadrant\n");
	}else if(x<0 && y>0){
		printf("2nd quadrant\n");
	}else if(x<0 && y<0){
		printf("3rd quadrant\n");
	}else if(x>0 && y<0){
		printf("4th quadrant\n");
	}
	return EXIT_SUCCESS;
}

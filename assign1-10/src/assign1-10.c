/*
 ============================================================================
 Name        : assign1-10.c
 Author      : Aman kayare
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int one, two, three, perimeter, semiPerimeter, area;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter the three side of triangle\n");
	scanf("%d %d %d", &one, &two, &three);
	perimeter = one + two + three;
	printf("Perimeter=%d\n", perimeter);
	semiPerimeter = (one + two + three) / 2;
	area = sqrt(semiPerimeter*(semiPerimeter-one)*(semiPerimeter-two)*(semiPerimeter-three));
	printf("Area of triangle=%d",area);

	return EXIT_SUCCESS;
}

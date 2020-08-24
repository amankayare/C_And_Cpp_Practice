
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int quant, prize = 5, total, temp_prize, dis;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter the quantity\n");
	scanf("%d", &quant);

	if (quant > 30 && quant < 50) {
		temp_prize = quant * prize;
		dis = 0.1 * temp_prize;
		total = temp_prize - dis;

	}
	else if (quant > 50) {
		temp_prize = quant * prize;
		dis = 0.15 * temp_prize;
		total= temp_prize -dis;

	}
	else{
		total = quant * prize;

	}
	printf("Total prize to be pay =%d\n", total);
	return EXIT_SUCCESS;
}

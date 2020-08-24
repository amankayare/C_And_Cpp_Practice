#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,ten,hun,thos,remainder,reversedNumber=0;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Enter a 4 digit number\n");
	scanf("%d",&num);
	thos=num/1000*1000;
	hun=num/100*100;
	ten=num/10*10;
	printf("a.%d\t%d\t%d\t%d\n",num/1000,(num%1000)/100,(num%100)/10,num%10);
	printf("b.%d=%d+%d+%d+%d\n",num,num/1000*1000,num/100*100-thos,num/10*10-hun,num/1*1-ten);

	printf("%d%d%d%d  ",num%10,(num%100)/10,(num%1000)/100,(num%10000)/1000);
		 while(num != 0)
			    {
			        remainder = num%10;
			        reversedNumber = reversedNumber*10 + remainder;
			        num /= 10;
			    }
	printf("%d",reversedNumber);
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch[20];
		printf("print multipe words using gets()\n");
		printf("Enter multiple words\n");
		gets(ch);
		printf("%s\n",ch);

		printf("print  multipe words using %[^\\n]\n");
		printf("Enter multiple words\n");
		scanf("%[^\n]",ch);
		printf("%s\n",ch);

		printf("print char using getchar\n");
		printf("Enter char\n");
		char c;
		c=getchar();
		printf("%c\n",c);


		return EXIT_SUCCESS;
}

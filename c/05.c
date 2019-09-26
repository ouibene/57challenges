#include <stdio.h>
#include <stdlib.h>

int main() {
	char first[32] = {'\0',};
	char second[32] = {'\0',};
	int num1 = 0, num2 = 0;
	
	printf("What is the first number? ");
	scanf("%s", first);
	printf("What is the second number? ");
	scanf("%s", second);

	num1 = atoi(first);
	num2 = atoi(second);

	/* constraints 3 - use only one print statement */
	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n", 
			num1, num2, num1+num2,
			num1, num2, num1-num2,
			num1, num2, num1*num2,
			num1, num2, num1/num2);

	return 0;
}

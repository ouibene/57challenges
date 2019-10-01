#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int euros = 0;
	double rate = 0, amount = 0;
	char c_rate[16] = {'\0',};

	printf("How many Euros are you exchanging? ");
	scanf("%d", &euros);
	printf("What is the exchange rate? ");
	scanf("%s", c_rate);
	rate = (atof(c_rate) * 100) / 100;

	amount = (euros * rate) / 100;

	printf("%d Euros at an exchange rate of %.2f is\n", euros, rate);
	printf("%.2f dollars\n", amount);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char c_age[4] = {'\0',};
	char c_ret[4] = {'\0',};
	int age = 0, ret = 0;
	int year = 0;
	time_t timer;
	struct tm *t;

	printf("What is your current age? ");
	scanf("%s", c_age);
	printf("At what age would you like to retire? ");
	scanf("%s", c_ret);

	age = atoi(c_age);
	ret = atoi(c_ret);

	timer = time(NULL);
	t = localtime(&timer);
	year = t->tm_year + 1900;

	printf("You have %d years left until you can retire.\n", ret - age);
	printf("It's %d, so you can retire in %d.\n", year, year + (ret - age ));

	return 0;
}

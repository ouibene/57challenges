#include <stdio.h>
#include <stdlib.h>

int main() {
	char *name = malloc(sizeof(char) * 64);

	printf("What is your name? ");
	scanf("%s", name);
	printf("Hello, %s, nice to meet you!\n", name);

	free(name);
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char *name = malloc(sizeof(char) * 64);
	
	printf("What is the input string? ");
	scanf("%s", name);

	printf("%s has %d characters.\n", name, (int)strlen(name));
	return 0;
}

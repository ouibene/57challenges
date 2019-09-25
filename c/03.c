#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *name = malloc(sizeof(char) * 64);  
	char *def = malloc(sizeof(char) * 1024);
	
	printf("What is the quote? ");
	fgets(def, 1024, stdin);
	def[strlen(def) - 1] = '\0';
	
	printf("Who said it? ");
	fgets(name, 64, stdin);
	name[strlen(name) - 1] = '\0';

	printf("%s says, \"%s\"\n", name, def);

	free(name);
	free(def);
	return 0;
}

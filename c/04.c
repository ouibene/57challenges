#include <stdio.h>

int main() {
	char noun[32] = {'\0',};
	char verb[32] = {'\0',};
	char adj[32] = {'\0',};
	char adv[32] = {'\0',};

	printf("Enter a noun: ");
	scanf("%s", noun);
	printf("Enter a verb: ");
	scanf("%s", verb);
	printf("Enter an adjective: ");
	scanf("%s", adj);
	printf("Enter an adverb: ");
	scanf("%s", adv);
	printf("Do you %s your %s %s %s? That's hilarious!\n", verb, adj, noun, adv);

	return 0;
}

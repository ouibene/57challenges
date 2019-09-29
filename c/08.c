#include <stdio.h>

int main() {
    int people = 0, pizzas = 0, pieces = 0;

    printf("How many people? ");
    scanf("%d", &people);
    printf("How many pizzas do you have? ");
    scanf("%d", &pizzas);

    do {
        printf("How many pieces are in a pizza? ");
        scanf("%d", &pieces);
    } while (pieces & 1);

    printf("%d people with %d pizzas\n", people, pizzas);
    printf("Each person gets %d pieces of pizza.\n"
           , ((pizzas * pieces) / people));
    printf("There are %d leftover pieces.\n"
           , ((pizzas * pieces) % people));

    return 0;
}

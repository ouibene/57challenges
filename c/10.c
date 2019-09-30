#include <stdio.h>

int input(int num, int *price, int *quant);

int main() {
    int price1 = 0, price2 = 0, price3 = 0;
    int quant1 = 0, quant2 = 0, quant3 = 0;
    double subtotal = 0, tax = 0, total = 0;

    input(1, &price1, &quant1);
    input(2, &price2, &quant2);
    input(3, &price3, &quant3);

    subtotal = (price1*quant1) + (price2*quant2) + (price3*quant3);
    tax = (subtotal / 1000) * 55;
    total = subtotal + tax;

    printf("Subtotal: $%.2f\n", subtotal);
    printf("Tax: $%.2f\n", tax);
    printf("Total: $%.2f\n", total);

    return 0;
}

int input(int num, int *price, int *quant) {
    printf("Price of item %d: ", num);
    scanf("%d", price);
    printf("Quantity of item %d: ", num);
    scanf("%d", quant);

    return 0;
}

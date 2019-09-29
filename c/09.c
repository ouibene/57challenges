#include <stdio.h>
#include <math.h>

int main() {
    int len = 0, wid = 0;
    int paint = 0;
    double squre_meters = 0;

    printf("What is the length of the room? ");
    scanf("%d", &len);
    printf("What is the width of the room? ");
    scanf("%d", &wid);

    squre_meters = len * wid;
    paint = ceil(squre_meters / 9);
    printf("You will need to purchase %d liters of\n", paint);
    printf("paint to cover %.0f square meters.\n", squre_meters);

    return 0;
}

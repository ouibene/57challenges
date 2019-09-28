#include <stdio.h>
#include <math.h>

int main() {
	int len = 0, wid = 0;
	int square_feet = 0;
	double square_meters = 0;

	printf("What is the length of the room in feet? ");
	scanf_s("%d", &len);
	printf("What is the width of the room in feet? ");
	scanf_s("%d", &wid);
	printf("You entered dimensions of %d feet by %d feet\n", len, wid);

	square_feet = len * wid;
	square_meters = square_feet * 0.09290304;
	printf("The area is\n");
	printf("%d square feet\n", square_feet);
	printf("%.3lf square meters\n", square_meters);

	return 0;
}
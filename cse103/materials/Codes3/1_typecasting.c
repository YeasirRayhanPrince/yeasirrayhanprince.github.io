#include<stdio.h>

int main() {

    float c = 3.141594335;
    printf("Division: %f\n", c); // default precision 6 = 6 digits after decimal point
    printf("Division: %.1f\n", c); // 1 digit after decimal point
    printf("Division: %.2f\n", c); // 2 digits after decimal point
    printf("Division: %.3f\n", c); // 3 digits after decimal point
    printf("Division: %.4f\n", c); // 4 digits after decimal point


	int a, b;
	float div; // division can contain fraction, so float
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);



    div = a / b;  // this will not work
    printf("Division: %f\n", div);


	div = (float) a / b;
	printf("Division: %f\n", div);

    div = a / (float) b; // this will also work
    printf("Division: %f\n", div);

    div = (float) a / (float) b;  // this will also work
    printf("Division: %f\n", div);

    div = (float) (a / b);  // this will not work
    printf("Division: %f\n", div);

	return 0;
}

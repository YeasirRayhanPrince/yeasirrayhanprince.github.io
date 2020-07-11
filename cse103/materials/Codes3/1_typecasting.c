#include<stdio.h>

int main() {

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

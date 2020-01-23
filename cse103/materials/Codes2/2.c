#include<stdio.h>

int main() {
	int a;
    int b;
    //printf("Enter a: ");
    //scanf("%d", &a);
    //printf("Enter b: ");
    //scanf("%d", &b);

    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    int sum;
    sum = a + b;
    printf("Sum %d", sum);

    return 0;
}

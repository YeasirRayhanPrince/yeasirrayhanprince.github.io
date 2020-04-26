#include<stdio.h>

//definition of function
double average(int a, int b) {
    double avg = (double)(a + b) / 2;
    return avg;
}

int main() {
    int x, y;
    double z;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    z = average(x, y); // call a function
    printf("Average: %.2f\n", z);
    return 0;
}

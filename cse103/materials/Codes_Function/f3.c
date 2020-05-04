#include<stdio.h>

double average(int, int);
//double average(int a, int b);// function prototype define

int main() {
    int x, y;
    double z;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    z = average(x, y);
    printf("Average: %.2f\n", z);
    return 0;
}

double average(int a, int b) {
    double avg = (double)(a + b) / 2;
    return avg;
}








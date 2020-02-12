#include<stdio.h>

int main() {
    int i, N;
    int sum;
    float avg;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    sum = 0;
    for ( i = 0; i < N; i++) {
       sum = sum + a[i];
    }
    avg = sum/ (float)N;
    printf("Sum: %d\n", sum);
    printf("Avg: %f\n", avg);    
    return 0;
}
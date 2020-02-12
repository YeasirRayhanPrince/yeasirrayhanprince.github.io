#include<stdio.h>

int main() {
    int i, N;
    int sum;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = 0;
    for ( i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + a[i];
        }
    }
    printf("Sum of even indexed elements: %d\n", sum);
    return 0;
}

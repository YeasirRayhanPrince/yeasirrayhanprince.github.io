#include<stdio.h>

int main() {
    int i, N;
    int max, max2;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    max = max2 = -9999999;
    for ( i = 0; i < N; i++)
    {
        if (a[i] > max)
        {
            max2 = max;
            max = a[i];
        }
        else if (a[i] > max2 && a[i] != max)
        {
            max2 = a[i];
        }
    }
    printf("Max: %d\n", max);
    printf("2nd Max: %d\n", max2);
    return 0;
}

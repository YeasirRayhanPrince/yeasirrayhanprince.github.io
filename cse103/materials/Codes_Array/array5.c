#include<stdio.h>

int main() {
    int i, N;
    int max, min;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    max = -99999999;
    min = 999999999;
    //max = min = a[0];
    for ( i = 0; i < N; i++)
    {
        if ( a[i] > max)
        {
            max = a[i];
        }
        if ( a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}

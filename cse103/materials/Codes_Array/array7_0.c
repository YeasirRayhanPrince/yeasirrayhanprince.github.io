#include<stdio.h>

int main() {
    int i, N, tmp;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    int b[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int j = N-1;
    for ( i = 0; i < N; i++)
    {
        b[j] = a[i];
        j--;
    }

    printf("Reverse: ");
    for ( i = 0; i < N; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}

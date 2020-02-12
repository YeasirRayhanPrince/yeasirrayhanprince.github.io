#include<stdio.h>

int main() {
    int i, N;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N]; // it was not possible in the earlier C versions
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("You Entered: ");
    for ( i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

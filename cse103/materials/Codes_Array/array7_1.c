#include<stdio.h>

int main() {
    int i, N, tmp;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < N/2; i++) {
        tmp = a[i];
        a[i] = a[N-i-1];
        a[N-i-1] = tmp;
    }
    printf("Reverse: ");
    for ( i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
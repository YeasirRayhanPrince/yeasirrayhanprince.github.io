#include<stdio.h>

int main() {
    int i, N1, N2, N3;
    printf("How many numbers for first array: ");
    scanf("%d", &N1);
    int a[N1];
    printf("Enter the numbers: ");
    for ( i = 0; i < N1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("How many numbers for second array: ");
    scanf("%d", &N2);
    int b[N2];
    printf("Enter the numbers: ");
    for ( i = 0; i < N2; i++)
    {
        scanf("%d", &a[i]);
    }

    int c[N1+N2];
    int j = 0;
    for ( i = 0; i < N1; i++)
    {
        c[j] = a[i];
        j++;
    }
    for ( i = 0; i < N2; i++)
    {
        c[j] = b[i];
        j++;
    }

    printf("Merged array");
    for ( i = 0; i < N1 + N2; i++)
    {
        printf("%d", c[i]);
    }
    return 0;
}



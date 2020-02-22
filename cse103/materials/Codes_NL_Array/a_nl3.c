#include<stdio.h>

int main() {
    int i, j, pos, N, temp;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i=0; i < N-1; i++ )
    {
        for ( j =0; j < N-1; j++ )
        {
            if ( a[j] > a[j+1]) // swap adjacent elements
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

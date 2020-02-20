#include<stdio.h>

int main() {
    int i, N;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    /* shifting array elements left */
    int temp=a[0];
    for(i=0; i < N-1; i++)
    {
        a[i] = a[i+1];
    }
    a[N-1]=temp;

    printf("New array after rotating by one position in the left direction\n");
    for(i=0; i<N; i++)
    {
        printf("%d ",a[i]);
    }

    temp = a[N-1];
    for(i=N-1; i>0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;

    printf("\nNew array after rotating by one position in the right direction\n");
    for(i=0; i < N; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


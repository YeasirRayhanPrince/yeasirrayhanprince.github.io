#include<stdio.h>

int main() {
    int i, N, x, loc;
    loc = -1;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &x);
    for ( i = 0; i < N; i++)
    {
        if ( a[i] == x)
        {
            loc = i;
            break;
        }
    }
    if (loc != - 1) {
        printf("%d found in index %d\n", x, loc);
    }
    else {
        printf("Not Found %d\n", x);
    }
    return 0;
}

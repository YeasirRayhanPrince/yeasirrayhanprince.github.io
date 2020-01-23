#include<stdio.h>

int main()
{
    int a, b, c;
    int max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if ( a >= b && a >= c)
    {
        max = a;
    }
    if ( b >= a && b >= c)
    {
        max = b;
    }
    if ( c >= a && c >= b)
    {
        max = c;
    }
    printf("Max: %d\n", max);
    return 0;
}

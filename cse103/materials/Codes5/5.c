#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    int max;
    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if ( a > b ){
        max = a;
    }
    else{
        max = b;
    }

    if ( c > max ){
        max = c;
    }

    if ( d > max ){
        max = d;
    }

    if ( e > max )
    {
        max = e;
    }

    printf("Max: %d\n", max);
    return 0;
}

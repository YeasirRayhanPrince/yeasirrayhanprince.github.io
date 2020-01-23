#include<stdio.h>

int main()
{
    int a, b, c;
    int max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if ( a >= c && a >= b ){
        max = a;
    }
    else if (b >= c){ // a is not maximum so no need to compare with a
        max = b;
    }
    else{
        max = c;
    }
    printf("Max: %d\n", max);
    return 0;
}

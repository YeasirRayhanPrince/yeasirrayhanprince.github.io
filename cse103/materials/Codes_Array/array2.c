#include<stdio.h>

int main() {
    int i;
    int a[10] = { };
    int b[10] = {1};
    int c[10] = {1, 2, 3, 4, 5};
    int d[ ] = {10, 20, 30, 40, 50};
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", d[i]);
    }
    printf("\n");
    return 0;
}

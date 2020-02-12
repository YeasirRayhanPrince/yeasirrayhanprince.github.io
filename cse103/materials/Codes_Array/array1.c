#include<stdio.h>

int main() {
    int i;
    int a[10]; // array of 10 elements
    printf("%d\n", a[0]);
    for ( i = 0; i < 10; i++ )
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

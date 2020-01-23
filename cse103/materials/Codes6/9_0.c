#include<stdio.h>
//prints the digits of a given number
int main() {
    int i, n, d;
    printf("Enter n: ");
    scanf("%d", &n);
    while( n != 0) {
        d = n % 10;
        printf("%d\n", d);
        //printf("%d", d);
        n = n / 10;
    }

    return 0;
}

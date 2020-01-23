#include <stdio.h>
/*Finds if a number is prime or not*/
int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for ( i = 2; i <= n/2; i++) {
        if ( n % i == 0) {
            printf("Not Prime\n");
        }
    }
    return 0;
}

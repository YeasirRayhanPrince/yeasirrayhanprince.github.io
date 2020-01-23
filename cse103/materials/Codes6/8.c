#include <stdio.h>
/*Finds the factorial of a number*/
int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    int mul = 1;
    for ( i = 1; i <= n; i++) {
        mul *= i;
    }
    printf("%d", mul);
    return 0;
}

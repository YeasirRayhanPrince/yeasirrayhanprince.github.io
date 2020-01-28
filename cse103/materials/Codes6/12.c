#include<stdio.h>

// 1 - x + x^2 - x^3 + x^4 - ..... + x^n
int main() {
    int i, x, n, sum, term, sign;
    printf("Enter x and n: ");
    scanf("%d%d", &x, &n);
    sum = 1; // initial sum
    term = 1;
    sign = -1; // initial sign
    for ( i = 1; i <= n; i++) {
        term = term * x;
        sum = sum + sign * term;
        sign = sign * -1;
    }
    printf("Result: %d\n", sum);
    return 0;
}

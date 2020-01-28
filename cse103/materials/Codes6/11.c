#include<stdio.h>

int main() {
    int a, b, c, i, n;
    a = 0; // first Fibonacci number
    b = 1; // second Fibonacci number
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 3; i<=n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", c);
    return 0;
}

#include<stdio.h>
//reverses the given number
int main() {
    int i, n, d;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;
    while( n != 0) {
        d = n % 10;
        sum = sum * 10 + d;
        printf("%d\n", sum);
        n = n / 10;
    }
    printf("Reverse Number = %d\n", sum);
    return 0;
}

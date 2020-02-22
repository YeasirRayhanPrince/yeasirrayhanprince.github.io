#include<stdio.h>

int main() {
    int i, j, n, s;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("List of Perfect Numbers: ");
    for ( i = 1; i <=n; i++) {
        s = 0;
        for ( j = 1; j< i; j++) {
            if ( i % j == 0) {
                s = s + j;
            }
        }
        if ( s == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
#include<stdio.h>

int main() {
    int i, j, n, flag;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("List of Prime Numbers: ");
    for ( i = 1; i <=n; i++) {
        flag = 1;
        for ( j = 2; j < i; j++) {
            if ( i % j == 0) {
                flag = 0;
                break;
            }
        }
        if ( flag == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

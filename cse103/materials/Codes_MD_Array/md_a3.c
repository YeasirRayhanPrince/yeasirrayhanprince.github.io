#include<stdio.h>

int main() {
    int i, j, r;
    int sum1 = 0, sum2 = 0;;

    printf("Enter number of rows and columns: ");
    scanf("%d", &r);
    int a[r][r];

    printf("Enter the matrix: ");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < r; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }

    // sum of first diagonal
    for ( i =0 ; i< r; i++ ) {
        //printf("%d ", a[i][i]);
        sum1 = sum1 + a[i][i];
    }
    printf("\n");

    // sum of second diagonal
    for ( i =0 ; i< r; i++ ) {
        //printf("%d ", a[i][r-1-i]);
        sum2 = sum2 + a[i][r-1-i];

    }
    printf("\n");

    if (sum1 == sum2) {
        printf("Sum of diagonals are same\n");
    }
    else {
        printf("Sum of diagonals are not same\n");
    }

    return 0;
}

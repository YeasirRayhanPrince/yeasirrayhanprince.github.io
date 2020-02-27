#include<stdio.h>

int main() {
    int i, j, r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int x[r][c], y[r][c], z[r][c];

    printf("Enter first matrix: ");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            scanf("%d", &x[i][j]);
        }
    }

    printf("Enter second matrix: ");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            scanf("%d", &y[i][j]);
        }
    }

    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
             // adding element by element
            z[i][j] = x[i][j] + y[i][j]; // addition
            //z[i][j] = x[i][j] - y[i][j]; //  subtraction
            //z[i][j] = x[i][j] * y[i][j]; // multiplication - right or wrong?
        }
    }

    printf("The resulting summation matrix: \n");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}

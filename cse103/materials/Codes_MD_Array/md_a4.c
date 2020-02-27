#include<stdio.h>

int main() {
    int i, j, r;
    int upperTriangle = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d", &r);
    int a[r][r];

    printf("Enter the matrix:");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < r; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }

    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < r; j++ ) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < r; j++ ) {
             if ( j  < i && a[i][j] != 0) {
                 upperTriangle = 0;
             }
             if ( j >= i && a[i][j] == 0) {
                 upperTriangle = 0;
             }
        }
    }

    if (upperTriangle == 1) {
       printf("An Upper Triangular Matrix: \n");
    }
    else {
          printf("Not an Upper Triangular Matrix: \n");
    }
    return 0;
}

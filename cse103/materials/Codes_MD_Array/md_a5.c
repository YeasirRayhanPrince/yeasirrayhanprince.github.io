#include<stdio.h>

int main() {
    int i, j, r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int a[r][c], b[c][r];

    printf("Enter the matrix (separate by space): ");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }

    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
             b[j][i] = a[i][j];
        }
    }


    printf("The transpose matrix: \n");
        for ( i =0 ; i< c; i++ ) {
            for ( j = 0; j < r; j++ ) {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

    return 0;
}

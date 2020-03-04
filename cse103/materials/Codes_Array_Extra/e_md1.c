#include<stdio.h>

int main() {
    int i, j, r, c;
    printf("Enter number of rows for input array: ");
    scanf("%d", &r);
    printf("Enter number of columns for input array: ");
    scanf("%d", &c);
    int x[r][c];

    int r1, c1;
    printf("Enter number of rows for output array: ");
    scanf("%d", &r1);
    printf("Enter number of columns for output array: ");
    scanf("%d", &c1);
    int y[r1][c1];

    if(r*c != r1*c1) return 0;

    printf("Enter first matrix: ");
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            scanf("%d", &x[i][j]);
        }
    }



    int tem[r*c];
    int k = 0;
    for ( i =0 ; i< r; i++ ) {
        for ( j = 0; j < c; j++ ) {
            tem[k] = x[i][j];
            k++;
        }
    }

    /*for ( i =0 ; i< r * c; i++ ) {
        printf("%d ", tem[i]);
    }

    printf("%d\n", k);
    */

    k = 0;
    for ( i =0 ; i< r1; i++ ) {
        for ( j = 0; j < c1; j++ ) {
            y[i][j] = tem[k];
            k++;
        }
    }

    printf("The resulting matrix: \n");
    for ( i =0 ; i< r1; i++ ) {
        for ( j = 0; j < c1; j++ ) {
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }
    return 0;
}

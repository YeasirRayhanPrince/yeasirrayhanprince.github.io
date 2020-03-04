#include<stdio.h>

int main() {
    int i, j, index, N, total, flag;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    total = 0; //number of unique elements
    for (i = 0; i < N; i++) {
        flag = 1;
        for (j = i+1; j < N; j++) {
            if ( a[i] == a[j] ) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            total++;
        }
    }
    printf("Total unique element: %d\n", total);
    return 0;
}

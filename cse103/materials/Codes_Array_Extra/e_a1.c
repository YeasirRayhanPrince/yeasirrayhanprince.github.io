#include<stdio.h>
int main() {
    int i, j, N;
    printf("How many numbers: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter the numbers: ");
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = -99999;
    int p = -1;
    int q = -1;
    for( i = 0; i < N ; i++){
        for(j = i + 1; j < N; j++){
            int diff = (a[i] - a[j] > 0) ?  a[i] - a[j] : a[j] - a[i];
            if(diff > max){
                max = diff;
                p = i;
                q = j;
            }
        }
    }
    printf("%d %d %d", max, p, q);
}


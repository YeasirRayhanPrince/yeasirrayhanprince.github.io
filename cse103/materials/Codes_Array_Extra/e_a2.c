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
    int cnt;
    for( i = 0; i < N ; i++){
        cnt = 0;
        for(j = 0; j < N; j++){
            if(a[i] == a[j]){
                cnt++;
            }
        }
        printf("%d - %d\n", a[i], cnt);
    }
}


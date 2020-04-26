#include<stdio.h>

double average(int a[], int n) {
    int i;
    int sum = 0;
    for(i = 0; i < n ; i++)
    {
        sum += a[i];
    }
    double avg = (double)sum / n;
    return avg;
}

int main() {
    int i, N;
    double z;
    printf("Enter array size: ");
    scanf("%d", &N);
    int x[N];
    printf("Enter array: ");
    for(i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }
    z = average(x, N);
    printf("Average: %.2f\n", z);
    return 0;
}

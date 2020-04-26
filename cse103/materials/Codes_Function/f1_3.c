#include<stdio.h>

double average(double a, double b) {
    double avg = (a + b) / 2;
    printf("%.2f\n", avg);
    return avg;
}

int main() {
    int N;
    printf("Enter array size: ");
    scanf("%d", &N);
    int x[N];
    printf("Enter array: ");
    int i;
    for(i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }

    double avg = 0;
    for(i = 0; i < N;i ++ ){
        avg = average(avg, x[i]);
    }
    printf("Average: %.2f\n", avg);
    return 0;
}

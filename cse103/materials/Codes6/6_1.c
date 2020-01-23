#include <stdio.h>
/*Find the summation of divisors of a number*/
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int counter;
    for(counter = 1; counter <= n; counter++){
        if( n % counter ==0){
            sum += counter;
        }
    }
    printf("Sum = %d\n", sum);
}


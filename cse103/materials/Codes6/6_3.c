#include <stdio.h>
/*Find the difference between the max and min divisors excluding 1 and n itself*/
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int counter;
    int max = -99999999;
    int min = 999999999;
    for(counter = 2; counter < n; counter++){
        if( n % counter ==0){
             if( counter < min ){
                min = counter;
             }
             if( counter > max ){
                max = counter;
             }
        }
    }
    printf("Difference between max and min divisor = %d", max - min);
    return 0;
}


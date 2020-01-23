#include <stdio.h>
/*Find the divisors of a number*/
int main(){
    int n;
    scanf("%d", &n);
    int counter;
    for(counter = 1; counter <= n; counter++){
        if( n % counter ==0){
            printf("%d\n", counter);
        }
    }
}


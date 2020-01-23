#include <stdio.h>
/*Find if a number is perfect or not*/
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int counter;
    for(counter = 1; counter < n; counter++){
        if( n % counter ==0){
            sum += counter;
        }
    }
    if( sum ==n ){
        printf("%d is a perfect number", n);
    }
    else{
        printf("%d is not a perfect number", n);
    }
}


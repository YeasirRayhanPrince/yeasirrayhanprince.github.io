#include <stdio.h>
#include <math.h>
/*Finds if a number is prime or not*/
int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    int flag = 0;
    for ( i = 2; i <= n/2; i++) {
        if ( n % i == 0) {
            flag = 1;
        }
    }
    if(flag == 0){
        printf("%d is a Prime Number", n);
    }
    else{
        printf("%d is not a Prime Number", n);
    }
    return 0;
}

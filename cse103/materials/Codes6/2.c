#include <stdio.h>
/*Solve the series: 1 * 3 * 5 * ... for n terms */
/*Solve the series: 101 * 103 * 105 * ... for n terms */
/*Solve the series: 0 * 2 * 4 * ... for n terms */

int main(){
    int counter = 1;
    int n;
    scanf("%d", &n);
    int mul = 1;
    int term = 1;
    while(counter <= n){
        mul *= term;
        term += 2;
        counter++;
    }
    printf("%d\n", mul);
}


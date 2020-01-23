#include <stdio.h>
#include <math.h>
/*Solve the series: 1^4 * 3^4 * 5^4 * ... for n terms */
int main(){
    int counter = 1;
    int n;
    scanf("%d", &n);
    int mul = 1;
    int term = 1;
    while(counter <= n){
        mul *= pow(term, 4);
        term += 2;
        counter++;
    }
    printf("%d\n", mul);
}


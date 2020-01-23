#include <stdio.h>
#include <math.h>
/*Solve the series: 1^5 * 3^6 * 5^7 * ... for n terms */
int main(){
    int counter;
    int n;
    scanf("%d", &n);
    int mul = 1;
    int term = 1;
    int power = 4;
    for(counter = 1; counter <= n; counter++){
        mul *= pow(term, power);
        term += 2;
        power++;
    }
    printf("%d\n", mul);
}


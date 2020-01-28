/*This program finds the gcd and lcm of two numbers*/
#include<stdio.h>

int main() {
    int a, b;
    int min, max;
    int i;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a < b){
        min = a;
    }
    else{
        min = b;
    }

    for (i = min; i >= 1; i--) {
        if (a%i ==0 && b%i == 0) {
            break;
        }
    }
    printf("GCD: %d\n", i);


    if(a > b){
        max = a;
    }
    else{
        max = b;
    }

    for (i = max; i <= a*b; i+=max) {
         if (i%a ==0 && i %b== 0) {
            break;
        }
    }
    printf("LCM: %d\n", i);
}

#include<stdio.h>

void swap(int a, int b) {
    printf("In swap, before a = %d and b = %d\n", a, b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("In swap, after a = %d and b = %d\n", a, b);
}

int main() {
    int a, b;
    a = 10;
    b = 20;
    printf("In main, before a = %d and b = %d\n", a, b);
    swap(a, b);
    printf("In main, after a = %d and b = %d\n", a, b);
    return 0;
}

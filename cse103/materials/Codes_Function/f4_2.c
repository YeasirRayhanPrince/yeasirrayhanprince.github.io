#include<stdio.h>

void f() {
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;
    printf("%d %d %d\n", a, b, c);
}

int main() {
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    printf("%d %d %d\n", a, b, c);
    if(1){
        a = 40;
        printf("%d\n", a);
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}







#include<stdio.h>

int f1(int a){
    a = 0;
    return a;
}
int main() {
    int a = 5;
    f1(a);
    printf("%d\n", a);
}


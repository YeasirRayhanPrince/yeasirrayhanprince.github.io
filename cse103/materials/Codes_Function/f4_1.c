#include<stdio.h>

int f1(int a){
    a = 0;
    printf("%d\n", a);
    return a;
}
int main() {
    int a = 5;
    int x = f1(a);
    printf("%d\n", a);
}



#include<stdio.h>

void print_count(int a) {
    printf("T minus %d counting\n", a);
}

int main() {
    int i;
    for(i = 10; i >= 0; i-- ){
        print_count(i);
    }
    printf("Happy Birthday!!");
    return 0;
}

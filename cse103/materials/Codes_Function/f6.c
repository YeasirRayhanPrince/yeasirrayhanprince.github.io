#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}
int mult(int a, int b) {
    return a * b;
}

float div(int a, int b) {


    if ( b == 0 )return 0;
    else return a / (float)b;
}

int main() {
    int x, y;
    float z = 0;
    char c;
    printf("Enter two numbers: " );
    scanf("%d%d", &x, &y);
    printf("Enter your option: ");
    scanf(" %c", &c);
    if ( c == '+') {
        z = sum(x, y);
    }
    else  if ( c == '-') {
        z = sub(x, y);
    }
     else if ( c == '*') {
        z = mult(x, y);
    }
    else  if ( c == '/') {
        z = div(x, y);
    }
    else {
        printf("Invalid Option\n");
    }
    printf("Result: %f\n", z);
    return 0;
}

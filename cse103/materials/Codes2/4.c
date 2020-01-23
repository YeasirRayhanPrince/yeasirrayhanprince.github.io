#include<stdio.h>

int main() {
    char a;
    int b;
    float c;
    double d;
    a = 'A';
    b = 10;
    c = 10.23;
    d = 12.45678;
    printf("%f\n", b +c); // int + float -> float
    printf("%lf\n", c + d); // float + double -> double
    printf("%d\n", a + b); // char + int -> int (char will be converted to its ASCI)
    printf("%c\n", a + b); // print the character to the provided ASCI in int
    return 0;
}

#include<stdio.h>

int main() {
    int a = 10;
    int b;
    a++; //post-increment operator
    printf("a = %d\n", a);
    ++a; //pre-increment operator
    printf("a = %d\n", a);
    b = a++; // a will contain a_old + 1, b will contain the a_old.
             //a++ makes a copy of a_old, increases a, and returns the copy (a_old).
    printf("a = %d, b = %d\n", a, b);
    b = ++a; // a and b will both contain a_old + 1.
             // ++a increases a, and returns a.
    printf("a = %d, b = %d\n", a, b);
    a += b; // a = a + b
    a -= b; // a = a - b
    a *= b; // a = a * b
    a /= b; // a = a / b;
    a %= b; // a = a % b
    return 0;
}

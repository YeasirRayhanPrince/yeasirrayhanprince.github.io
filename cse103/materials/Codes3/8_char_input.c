#include<stdio.h>

int main() {
    char c;
    int n;
    printf("Enter a character: "); // character first 
    scanf("%c", &c); 
    printf("Enter a number: "); // number second
    scanf("%d", &n);
    printf("%c\n",  c + n);
    printf("%c\n",  c - n);
    return 0;
}

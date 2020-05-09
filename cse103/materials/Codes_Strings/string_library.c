/*The C language includes a standard library full of routines for working with null-byte terminated arrays of chars.
#include < string.h > to use any of these functions.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char s[80] = "Stay Home ";
    char t[80] = "and ";
    char u[80] = "Stay Safe ";

    // strlen(u) - returns the length of u
    //int len = strlen(s);
    //printf("Length of your concatenated string: %d\n", len);
    //len = strlen("hello world");
    puts(t);
    strcpy(t,s); //- copies contents of s to t, overwrites t
    puts(t);
    //strcpy(t,s);
    //printf("Your copied string: %s\n", t);
    //strcpy(u, "hello");

    // strcat(u,t) - concatenates content of t to u, doesn't overwrite u
    //strcat(u,t);
    //printf("Your concatenated string: %s\n", u);
    //strcat(u, " world");

    // strcmp(s,t) - compares s and t, if equal returns 0, otherwise returns the difference of first mismatch
    //int cmp = strcmp(s,s);
    //printf("Comparing %s and %s : %d\n", s, s, cmp);
    //cmp = strcmp(s,t);
    //printf("Comparing %s and %s : %d\n", s, t, cmp);
    //cmp = strcmp(s,u);
    //printf("Comparing %s and %s : %d\n", s, u, cmp);


    return 0;
}

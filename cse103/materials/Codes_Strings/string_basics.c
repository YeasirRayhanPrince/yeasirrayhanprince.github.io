#include <stdio.h>
/*
The C language does not have a specific "String" data type, the way some other languages such as C++ and Java do.
Instead C stores strings of characters as arrays of chars, terminated by a null character
*/
int main(){
    // Initializing strings
    char s1[ ] = { 'h', 'e', 'l', 'l', 'o', '\0' };
    char s2[ ] = "hello"; // Array of size six
    char s3[ 20 ] = "hello"; // Fifteen null bytes
    char s4[ 5 ] = "hello"; // Five chars, sacrifices the null byte
    char s5[ 3 ] = "hello"; // Illegal
    char s5[ 3 ] = "hello"; // Illegal

    // Writing Strings Using printf and puts
    printf("%s\n", s1);
    printf("%s\n", s2);

    puts(s1);
    puts(s2);

    // Reading Strings Using scanf and gets
    char s5[80];
    scanf("%s", s5);
    printf("%s", s5);
    char s6[80];
    gets(s6);
    printf("%s", s6);

    return 0;
}

#include <stdio.h>

int my_strlen(char s1[]){
    int len = 0, i = 0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    return len;
}

void my_strcpy(char s1[], char s2[]){
    int i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void my_strcat(char s1[],char s2[]){
    int i = 0; //index of s2
    int j = my_strlen(s1); // index of s1
    while(s2[i] != '\0')
    {
        s1[j] = s2[i];
        i++;
        j++;
    }
    s1[j] = '\0';

}

int my_strcmp(char s1[], char s2[])
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] )
    {
        i++;
    }
    return s1[i] - s2[i];
}


int main(){
    char s[80] = "Stay Home ";
    char t[80] = "and ";
    char u[80] = "Stay Safe ";

    // strlen(u) - returns the length of u
    int len = my_strlen(s);
    printf("Length of your concatenated string: %d\n", len);
    len = strlen("hello world");

    // strcpy(t,s) - copies contents of s to t, overwrites t
    my_strcpy(t,s);
    printf("Your copied string: %s\n", t);
    strcpy(u, "hello ");

    // strcat(u,t) - concatenates content of t to u, doesn't overwrite u
    my_strcat(u,t);
    printf("Your concatenated string: %s\n", u);
    my_strcat(u, " world");

    // strcmp(s,t) - compares s and t, if equal returns 0, otherwise returns the difference of first mismatch
    int cmp = my_strcmp(s,s);
    printf("Comparing %s and %s : %d\n", s, s, cmp);
    cmp = my_strcmp(s,t);
    printf("Comparing %s and %s : %d\n", s, t, cmp);
    cmp = my_strcmp(s,u);
    printf("Comparing %s and %s : %d\n", s, u, cmp);


    return 0;
}

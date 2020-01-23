int main() {
    char c;
    int n;
    printf("Enter a number: "); // number first
    scanf("%d", &n);
    printf("Enter a character: "); // character second
    scanf(" %c", &c);  // note the extra space before %c in scanf
    // this extra  space will consume all the whitespace characters like space, tab etc.
    // without this space you can't scan any character after any integer, float, double etc.
    printf("%c\n",  c + n);
    printf("%c\n",  c - n);
    return 0;
}

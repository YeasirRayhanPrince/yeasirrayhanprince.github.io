int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if ( a > b )
    {
        printf("a is greater\n");
    }
    if ( b > a)
    {
        printf("b is greater\n");
    }
    if ( a == b )
    {
        printf("a equals b\n");
    }
    return 0;
}

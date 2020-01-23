int main()
{
    int a, b;
    printf("Enter two different numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("a is greater\n");
    }
    else if(b > a)
    {
        printf("b is greater\n");
    }
    else{
        printf("a equals b\n");
    }
    return 0;
}

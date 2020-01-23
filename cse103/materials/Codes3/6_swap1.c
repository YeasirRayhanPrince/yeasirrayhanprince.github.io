int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap, a = %d and b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swap, a = %d and b = %d\n", a, b);
    return 0;
}

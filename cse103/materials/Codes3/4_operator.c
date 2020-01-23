int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    printf("%d\n", a > 0 && b > 0);
    b = 0;
    printf("%d\n", a > 0 || b > 0);
    printf("%d\n", !a);
    printf("%d\n", !b);
    return 0;
}

#include<stdio.h>

int main()
{
    int i;
    printf("Break Example\n");
    for (i = 1; i <=10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("Break In Infinite Loop Example\n");
    i = 1;
    while(1)
    {
        if (i > 10)
        {
            break;
        }
        printf("%d\n", i);
        i++;

    }
    printf("Continue Example\n");
    for (i = 1; i <=10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

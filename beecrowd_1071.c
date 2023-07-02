#include <stdio.h>

int main()
{
    int i, x, y, impares = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x == y)
        printf("%d\n", impares);
    else if (x > y)
    {   
        i = y + 1;
        for (i; i < x; i++)
        {
            if (i % 2 != 0)
                impares += i;
        }
        printf("%d\n", impares);
    }
    else
    {
        i = x + 1;
        for (i; i < y; i++)
        {
            if (i % 2 != 0)
                impares += i;
        }
        printf("%d\n", impares);
    }
}
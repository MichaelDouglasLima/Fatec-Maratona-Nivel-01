#include <stdio.h>

int main()
{
    int i, number, total;

    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        total = i * number;
        printf("%i x %i = %i\n", i, number, total);
    }

    return 0;
}
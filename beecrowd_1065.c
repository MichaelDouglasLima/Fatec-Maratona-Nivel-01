#include <stdio.h>

int main()
{
    int i, number, pares = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &number);
        
        if (number % 2 == 0)
            pares += 1;
    }

    printf("%d valores pares\n", pares);

    return 0;
}
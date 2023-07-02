#include <stdio.h>

int main()
{
    long int number, quadrado, i;

    scanf("%ld", &number);

    for (i = 2; i <= number; i++)
    {
        if (i % 2 == 0)
        {   
            quadrado = i * i;
            printf("%ld^2 = %ld\n", i, quadrado);
        }
    }

    return 0;
}
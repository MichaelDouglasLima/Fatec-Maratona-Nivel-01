#include <stdio.h>

int main()
{
    int M, N, i, SOMA;

    while (1)
    {
        SOMA = 0;

        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0)
            break;

        if (M <= N)
        {   
            i = M;
            for (i; i <= N + 1; i++)
            {
                if (i <= N)
                {
                    printf("%i ", i);
                    SOMA += i;
                }          
                else
                    printf("Sum=%d\n", SOMA);
            }
        }
        else
        {
            i = N;
            for (i; i <= M + 1; i++)
            {
                if (i <= M)
                {
                    printf("%i ", i);
                    SOMA += i;
                }          
                else
                    printf("Sum=%d\n", SOMA);
            }
        }
    }

    return 0;
}
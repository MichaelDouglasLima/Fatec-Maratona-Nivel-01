#include <stdio.h>

int main()
{
    int N, i;
    double media, num1, num2, num3;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%lf %lf %lf", &num1, &num2, &num3);
        media = 2 * num1 + 3 * num2 + 5 * num3;
        media = media / 10;
        printf("%0.1lf\n", media);
    }

    return 0;
}
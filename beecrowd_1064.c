#include <stdio.h>

int main()
{
    int i, positivos = 0;
    double number, media = 0.0;

    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &number);

        if (number > 0.0) {
            positivos += 1;
            media += number;
        }
    }
    
    media = media / positivos;
    
    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media);

    return 0;
}

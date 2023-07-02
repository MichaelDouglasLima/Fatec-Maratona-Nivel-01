#include <stdio.h>

int main()
{
    int codigo, qntd;
    double total=0;

    scanf("%d %d", &codigo, &qntd);

    switch (codigo)
    {
        case 1:
            total = 4.00 * qntd;
            break;
        case 2:
            total = 4.50 * qntd;
            break;
        case 3:
            total = 5.00 * qntd;
            break;
        case 4:
            total = 2.00 * qntd;
            break;
        case 5:
            total = 1.50 * qntd;
            break;
        default:
            break;
    }

    printf("Total: R$ %0.2lf\n", total);

    return 0;
}
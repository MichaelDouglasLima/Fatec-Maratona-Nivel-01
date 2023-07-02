#include <stdio.h>

int main()
{
    double N;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0;
    int m1=0, m50=0, m25=0, m10=0, m05=0, m01=0;

    scanf("%lf", &N);

    while (N > 0.00) 
    {
        if (N >= 100)
        {
            n100 += 1;
            N -= 100;
        }
        else if (N >= 50)
        {
            n50 += 1;
            N -= 50;
        }
        else if (N >= 20)
        {
            n20 += 1;
            N -= 20;
        }
        else if (N >= 10)
        {
            n10 += 1;
            N -= 10;
        }
        else if (N >= 5)
        {
            n5 += 1;
            N -= 5;
        }
        else if (N >= 2)
        {
            n2 += 1;
            N -= 2;
        }
        else if (N >= 1)
        {
            m1 += 1;
            N -= 1;
        }
        else if (N >= 0.50)
        {
            m50 += 1;
            N -= 0.50;

        }
        else if (N >= 0.25)
        {
            m25 += 1;
            N -= 0.25;
        }
        else if (N >= 0.10)
        {
            m10 += 1;
            N -= 0.10;
        }
        else if (N >= 0.05)
        {
            m05 += 1;
            N -= 0.05;
        }
        else if (N >= 0.01)
        {
            m01 += 1;
            N -= 0.01;
        }
        else
            break;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
}
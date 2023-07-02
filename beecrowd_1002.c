#include <stdio.h>

int main() 
{
    double raio, area;

    scanf("ls", &raio);

    area = 3.14159 * (raio * raio);

    printf("A=%0.4ls", area);

    return 0;
}
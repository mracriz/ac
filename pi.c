#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_double() {
   return rand()/(double)RAND_MAX;
}

double prox_pi(double n)
{
    time_t t;
    double x, y;
    double acertos = 0;
    srand((long)time(NULL)); /* initialize rand() */

    for(int i =0; i<n; i++)
    {
        x = rand_double();
        y = rand_double();
        if((x * x + y * y) < 1)
        {
            acertos = acertos + 1;
        }
    }
    double valor = 4 * acertos / n;
    return valor;
}

int main()
{
    prox_pi(1000000);
}
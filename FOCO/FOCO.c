#include <stdio.h>
#include <math.h>

int main ()
{
    int L=7;
    float A= sqrt(pow(L,2) + pow(3*L,2));
    float pt=(7*L)+M_PI*(3*L)/2.0 + 2*A;
    float at=2*3*L*L + (2*3*L*L)/2 + M_PI*pow(3*L/2.0,2)/2;
    printf ("EL ARE TOTAL ES: %f",at);
    printf ("EL PERIMETRO TOTAL ES: %f",pt);
    return 0;
}

#include <stdio.h>
#include <math.h>


int main ()
{
    int L=2;
    float A,B,C,D,E,F,G,H;
    A=1.0/4*L;
    B=3.0/2*L;
    C=1.0/2*L;
    D=sqrt((B*B)+(L*L));  //HIPOTENUSA 4
    E=(B*L)/2;         //AREA 4
    F=2*L*A;           //AREA 5
    G=sqrt((L*L)+(L*L)); //HIPOTENUSA 2 Y 3
    H=L*L/2;          //AREA 2 Y 3

    float pt=(2*A)+(2*C)+(2*G)+D+B+(2*L);
    float at=(2*H)+(L*L)+F+E;

    printf("EL PERIMETRO TOTAL ES: %.2f\n",pt);
    printf("EL AREA TOTAL ES: %.2f\n",at);
    return 0;

}

#include <stdio.h>
#include <math.h>

// coete at,pt
int main ()
{
  int L=7;
  float A,B,C,R;
  A=L*L;
  B=1.0/5*L*3.0/5.0*L;
  C=1.0/5*L*1.0/5.0*L;
  R=3.1416*L/2*L/2;

  float pt=23.0/5*L+3.1416*L/2;
  float at= A+2*B+2*C+R/2;
  printf("el perimetro total es: %f\n",pt);
  printf("el area total es: %f\n",at);
  return 0;
}

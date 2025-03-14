
#include<stdio.h>
int main ()

{
int paquetes, cucharas;

 const float ISR =0.1, PAGO =0.50;
 float brt,isr, neto,totalch;
 int numMUJ, numHOM;
 printf("NUMERO DE PAQUETES EN LA SEMANA:\n");
 scanf ("%d", &paquetes);
 brt=paquetes*PAGO;
 isr=brt*ISR;
 neto=brt-isr;
 totalch=paquetes*12;
 printf("SALARIO BRUTO ES: %f\n", brt);
 printf("SALARIO NETO ES: %f\n", neto);
 printf("EL TOTAL DE CUCHARAS ES: %f\n", totalch);
 printf("EL ISR ES : %f\n", isr);



 return 0;


}

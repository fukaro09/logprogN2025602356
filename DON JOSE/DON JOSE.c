#include<stdio.h>
int main ()

{
 int L=12;
 const float  IVA=0.16, m=9256.00;
 float areaTotal,areaT,areaR,Total, TotalIva, base ;

 areaT=1.0/2*L*10.39/2;
 areaR=(5.19)*L;
 areaTotal=areaT + areaR;
 Total=areaTotal*m;
 TotalIva=(Total*IVA)+Total;

 printf("EL AREA DEL TRINGULO ES: %f \n",areaT);
 printf("EL AREA DEL ROMBOIDE ES: %f \n",areaR);
 printf("EL AREA TOTAL ES: %f \n",areaTotal);
 printf("EL TOTAL A PAGAR ES: %f \n",Total);
 printf("EL TOTAL A PAGAR CON IVA ES: %f \n",TotalIva);
 return 0;


}

#include<stdio.h>
int main ()

{
 const float COVER =500, DESC =0.25;
 float total;
 int numMUJ, numHOM;
 printf("NUMERO DE MUJERES:\n");
 scanf ("%d", &numMUJ);
 printf("NUMERO DE HOMBRES:\n");
 scanf ("%d", &numHOM);
 total=numHOM*COVER+numMUJ*COVER-numMUJ*COVER*DESC;
 printf ("TOTAL: %f",total);
 return 0;


}

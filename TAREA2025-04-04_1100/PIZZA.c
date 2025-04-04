#include <stdio.h>
int main()
{
    int piz,veg,car;
    printf ("INDIQUE LA PIZZA DESEADA\n");
    printf ("PIZZA VEGETARIANA 1\n");
    printf ("PIZZA TRADICIONAL 2\n");
    scanf("%d",&piz);
    if (piz==1){
    printf ("INDIQUE EL INGREDIENTE\n");
    printf ("PIMIENTO 1\n");
    printf ("TOFU 2\n");
    scanf("%d",&veg);
    if(veg==1){
    printf ("LA PIZZA ES VEGETARIANA Y TIENE: MOZZARELLA, TOAMTE Y PIMIENTO");
    }
    else {
    printf ("LA PIZZA ES VEGETARIANA Y TIENE: MOZZARELLA, TOAMTE Y TOFU");
    }
    }
    if (piz==2){
    printf ("INDIQUE EL INGREDIENTE\n");
    printf ("PEPERONI 1\n");
    printf ("JAMON 2\n");
    printf ("SALOM 3\n");
    scanf("%d",&car);
    if (car==1){
    printf ("LA PIZZA ES TRADICIONAL Y TIENE: MOZZARELLA, TOMATE Y PEPERONI");
    }
    else if (car==2){
    printf ("LA PIZZA ES TRADICIONAL Y TIENE: MOZZARELLA, TOMATE Y JAMON");
    }
    else{
    printf ("LA PIZZA ES TRADICIONAL Y TIENE: MOZZARELLA, TOMATE Y SALMON");
    }
    }
   return 0;
}

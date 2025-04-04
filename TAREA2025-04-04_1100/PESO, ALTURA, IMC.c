#include <stdio.h>

int main()
{
    float PESO,ALTURA,IMC;
    printf("INGRESE SU ALTURA EN METROS\n");
    scanf("%f",&altura);
    printf("INGRES SU PESO EN KG\n");
    scanf("%f",&peso);
    imc=peso/(altura*altura);
    if (imc>=40){
        printf("OBESIDAD CLASE 3");
    }
    else{ if (imc>=35 && imc <=39.9){
        printf("OBESIDAD CLASE 2");
    }
    else{ if(imc>=30 && imc<=34.9){
        printf("OBESIDAD CLASE 1");
    }
    else{ if(imc>=25 && imc <=29.9){
        printf("SOBREPESO");
        }
    else { if(imc>=18.5 && imc <=24.9){
        printf("PESO NORMAL");
        }
    else { if(imc<=18){
        printf("BAJO PESO");
        }
        }
        }
        }
    }
    }
    return  0;
}

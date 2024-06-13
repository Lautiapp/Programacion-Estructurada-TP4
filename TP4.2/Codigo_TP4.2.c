#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
   float suma_importes = 0.0;
   int supera_mil = 0;
   int supera_diezmil = 0;
   int entre_valores = 0;
   int numero_factura;
   float importe_factura = 0.0;
   numero_factura = -1;

   do {
    do {
        printf("Ingrese el numero de factura: \n");
        scanf("%d", &numero_factura);
        if (numero_factura < 0){
            printf("El numero de factura no puede ser menor a cero, intente nuevamente\n");
        }
    } while (numero_factura < 0);
    if (numero_factura > 0) {
        do {
            printf("Ingrese el importe de la factura: \n");
            scanf("%f", &importe_factura);
            if (importe_factura <= 0){
                printf("El importe de la factura no puede ser menoor o igual a cero, intente nuevamente\n");
            }
        } while (importe_factura <= 0);
        suma_importes += importe_factura;
        if (importe_factura > 1000){
            supera_mil++;
        }
        if (importe_factura > 10000){
            supera_diezmil++;
        }
        else if (importe_factura >= 400 && importe_factura <= 700){
            entre_valores++;
        }
    }


   } while (numero_factura != 0);

    printf("La suma de los importes ingresados es: $%.3f\n", suma_importes);
    printf("La cantidad de importes que superan los $10.000 es: %d\n", supera_diezmil);
    printf("La cantidad de importes que superan los $1.000 es: %d\n", supera_mil);
    printf("La cantidad de importes que se encuentran entre $400 y $700 inclusive es: %d", entre_valores);

    return 0;
}
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
   int numero_factura;
   int numero_articulo;
   int cantidad_vendida;
   float precio_unitario;

   do{
    
    do {
        printf("Ingrese el numero de factura: ");
        scanf("%d", &numero_factura);
        if (numero_factura < 0){
            printf("El numero de factura no puede ser menor a cero. Intente nuevamente\n");
        }
    } while (numero_factura < 0);

    if (numero_factura > 0){
        do {
        printf("Articulos disponibles: \n(1) Martillo\n(2) Serrucho\n(3) Escalera\nIngrese el numero de articulo: ");
        scanf("%d", &numero_articulo);
        if (numero_articulo != 1 && numero_articulo != 2 && numero_articulo != 3){
            printf("El articulo ingresado no existe. Intente nuevamente\n");
        }
        } while (numero_articulo != 1 && numero_articulo != 2 && numero_articulo != 3);
        do {
            printf("Ingrese la cantidad vendida: ");
            scanf("%d", &cantidad_vendida);
            if (cantidad_vendida <= 0){
                printf("La cantidad vendida no puede ser menor o igual a cero. Intente nuevamente\n");
            }
        } while (cantidad_vendida <= 0);
        do {
            printf("Ingrese el precio unitario: ");
            scanf("%f", &precio_unitario);
            if (precio_unitario <= 0){
                printf("El precio no puede ser menor o igual a cero. Intente nuevamente\n");
            } 
        } while (precio_unitario <= 0);
    }

   } while (numero_factura != 0);
   

    return 0;
}
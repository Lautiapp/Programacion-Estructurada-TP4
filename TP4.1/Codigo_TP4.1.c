#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
   int i = 0;
   int cantidad_sueldos;
   float sueldo;
   float suma_sueldos = 0.0;

   do {
    printf("Especifique la cantidad de sueldos a ingresar: ");
    scanf("%d", &cantidad_sueldos);
    if (cantidad_sueldos <= 0){
        printf("La cantidad de sueldos no puede ser menor o igual a cero");
    }
   } while (cantidad_sueldos <= 0);

   do {
    printf("Ingrese un sueldo: ");
    scanf("%f", &sueldo);
    suma_sueldos += sueldo;
    i++;
   } while (i != cantidad_sueldos);

   float promedio_sueldos = suma_sueldos / cantidad_sueldos;

   printf("La suma de los sueldos ingresados es: $%.1f y el promedio de estos es: $%.3f", suma_sueldos, promedio_sueldos);
   


    return 0;
}
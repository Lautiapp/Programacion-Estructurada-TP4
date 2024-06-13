#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
   int i = 0;
   float positivos = 0.0;
   float negativos = 0.0;
   int ceros = 0;
   float suma_positivos = 0;
   float suma_negativos = 0;
   int cantidad_valores;
   float valor;

   do {
    
    printf("Indique la cantidad de valores a ingresar: \n");
    scanf("%d", &cantidad_valores);

    if (cantidad_valores <=0) {
        printf("La cantidad de valores a ingresar no puede ser menor o igual a cero\n");
    }

   } while (cantidad_valores <= 0);

   while (i < cantidad_valores) {
    
    printf("Ingrese un valor: \n");
    scanf("%f", &valor);
    
    
    if (valor > 0){
        positivos++;
        suma_positivos += valor;
    }
    else if (valor < 0){
        negativos++;
        suma_negativos += valor;
    }
    else {
        ceros++;
    }
    
    i++;

   }

    if (positivos > 0){
        float promedio_positivos = suma_positivos / positivos;
        printf("El promedio de los numeros positivos ingresados es: %.2f\n", promedio_positivos);
    }
    else {
        printf("No se han ingresado numeros positivos\n");
    }
    if (negativos > 0){
        float promedio_negativos = suma_negativos / negativos;
        printf("El promedio de los numeros positivos ingresados es: %.2f\n", promedio_negativos); 
    }
    else {
        printf("No se han ingresado numeros negativos\n");
    }

    printf("La cantidad de ceros ingresados es: %d", ceros);

    return 0;
}
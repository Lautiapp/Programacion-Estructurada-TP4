#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    float temperatura;
    float temperatura_maxima;
    float temperatura_minima;
    int i = 0;

    do {
        printf("Ingrese una temperatura: ");
        scanf("%f", &temperatura);

        if(temperatura != 1000) {
            if (i == 0) {
                temperatura_maxima = temperatura;
                temperatura_minima = temperatura;
                i ++;
            }
            else if (temperatura > temperatura_maxima) {
                temperatura_maxima = temperatura;
            }
            else if (temperatura < temperatura_minima) {
                temperatura_minima = temperatura;
            }
        }


    } while (temperatura != 1000);

    if (i == 0){
        printf("No se ha ingresado ninguna temperatura");
    }
    else {
        printf("La tempera maxima fue: %.1f y la minima: %.1f", temperatura_maxima, temperatura_minima);
    }

   

    return 0;
}
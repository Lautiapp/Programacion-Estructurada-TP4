#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int numero_auto;
    int horas;
    int minutos;
    int segundos;
    int i = 0;
    int gano;
    int ultimo;
    int tiempo;
    int tiempo_gano;
    int tiempo_perdio;
    int cantidad_autos = 0;

    do {
        do{
            printf("Ingrese el numero de auto: \n(0) Finaliza el programa\n");
            scanf("%d", &numero_auto);
            if (numero_auto < 0){
                printf("El numero de auto no puede ser negativo. Intente nuevamente\n");
            } 
        } while (numero_auto < 0);

        if (numero_auto != 0){
            do {
                printf("Ingrese las horas recorridas: ");
                scanf("%d", &horas);
                printf("Ingrese los minutos recorridos: ");
                scanf("%d", &minutos);
                printf("Ingrese los segundos recorridas: ");
                scanf("%d", &segundos);
                
                if(horas < 0 || minutos < 0 || segundos <=0) {
                    printf("Las horas y/o los minutos no pueden ser menor a cero. Ademas, los segundos no pueden ser menores a '1'");
                }
            } while (horas < 0 || minutos < 0 || segundos <=0);

            tiempo = horas * 3600 + minutos * 60 + segundos;

            if (i == 0){
                gano = numero_auto;
                ultimo = numero_auto;
                tiempo_gano = tiempo;
                tiempo_perdio = tiempo;
                i++;
            }
            else if (tiempo < tiempo_gano) {
                gano = numero_auto;
                tiempo_gano = tiempo;
            }
            else if (tiempo > tiempo_perdio){
                ultimo = numero_auto;
                tiempo_perdio = tiempo;
            }
        }
        cantidad_autos++;

    } while (numero_auto != 0);

    if (cantidad_autos == 0){
        printf("No se ha ingresado el tiempo de ningun auto");
    }
    else if(cantidad_autos == 1){
        printf("Solo se ha ingresado 1 auto");
    }
    else if(tiempo_gano == tiempo_perdio){
        printf("El tiempo de los autos ingresados es el mismo");
    }
    else{
        int horas_gano = tiempo_gano / 3600;
        int minutos_gano = (tiempo_gano % 3600) / 60;
        int segundos_gano = ((tiempo_gano % 3600) % 60);

        int horas_ultimo = tiempo_perdio / 3600;
        int minutos_ultimo = (tiempo_perdio % 3600) / 60;
        int segundos_ultimo = ((tiempo_perdio % 3600) % 60);

        printf("El auto ganador es el numero: %d\nCon un tiempo de %d horas, %d minutos y %d segundos\n", gano, horas_gano, minutos_gano, segundos_gano);
        printf("El auto en ultimo lugar es el numero: %d\nCon un tiempo de %d horas, %d minutos y %d segundos", ultimo, horas_ultimo, minutos_ultimo, segundos_ultimo);

    }

    

    

    return 0;
}
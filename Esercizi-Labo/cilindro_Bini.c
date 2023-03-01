#include <stdio.h>

int main(){
    float raggio, altezza, volume;

    printf("Inserisci il raggio e l'altezza del cilindro:\n");
    scanf("%f%f", &raggio, &altezza);

    volume = altezza * 3.14 * raggio * raggio;
    printf("Volume: %f", volume);

    return 0;
}
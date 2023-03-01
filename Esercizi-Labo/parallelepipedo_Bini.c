#include <stdio.h>

int main(){
    float larghezza, lunghezza, altezza, volume;

    printf("Inserisci larghezza, lunghezza e altezza del parallelepipedo:\n");
    scanf("%f%f%f", &larghezza, &lunghezza, &altezza);

    volume = larghezza * lunghezza * altezza;
    printf("Volume: %f", volume);

    return 0;
}
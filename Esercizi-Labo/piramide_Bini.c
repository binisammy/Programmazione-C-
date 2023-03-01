#include <stdio.h>

int main(){
    float lunghezza, larghezza, altezza, volume;

    printf("Inserisci la lunghezza, la larghezza e l'altezza della piramide:\n");
    scanf("%f%f%f", &lunghezza, &larghezza, &altezza);

    volume = (lunghezza*larghezza)/3 * altezza;
    printf("Volume: %f", volume);

    return 0;
}
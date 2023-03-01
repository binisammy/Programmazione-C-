#include <stdio.h>

int main() {
    float velocita;

    printf("Inserisci la velocita' in km/h:\n");
    scanf("%f", &velocita);

    velocita = velocita / 3.6;
    printf("La velocita' in m/s vale: %f m/s", velocita);

    return 0;
}
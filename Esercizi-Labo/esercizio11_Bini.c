#include <stdio.h>
#include <math.h>

int main() {
    float raggio, diametro, circ, area;
    printf("Inserisci il raggio:\n");
    scanf("%f", &raggio);

    diametro = 2 * raggio;
    circ = 2 * 3.14 * raggio;
    area = 3.14 * pow(raggio, 2);

    printf("Il diametro vale: %f cm\nL'area vale: %f cm\nLa circonferenza vale: %f cm\n",
           diametro, area, circ);

    return 0;
}
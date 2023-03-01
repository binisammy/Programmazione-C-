#include <stdio.h>

int main(){
    float base, altezza, area;

    printf("Inserisci il valore della base: ");
    scanf("%f", &base);
    printf("Inserisci il valore della altezza: ");
    scanf("%f", &altezza);

    area = (base * altezza) / 2;
    printf("L'area vale: %.1f", area);

    return 0;
}   
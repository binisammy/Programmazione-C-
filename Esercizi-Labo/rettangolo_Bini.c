#include <stdio.h>

int main(){
    int base, altezza, perimetro, area;
    printf("Inserisci base e altezza:\n");
    scanf("%d%d", &base, &altezza);

    perimetro = base*2 + altezza*2;
    area = base*altezza;

    printf("Area: %d\nPerimetro: %d", area, perimetro);

    return 0;
}
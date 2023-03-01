#include <stdio.h>

int main(){
    int x,y,z;
    int costo = 0;
    printf("Inserisci l'eta' di tre persone: ");
    scanf("%d%d%d",&x, &y, &z);

    if (x <= 18) {
        costo += 20;
        if (x <= 12)
            costo -= 10;
    }
    else if (x >= 70)
        costo += 10;
    else
        costo += 35;

    if (y <= 18) {
        costo += 20;
        if (y <= 12)
            costo -= 10;
    }
    else if (y >= 70)
        costo += 10;
    else
        costo += 35;

    if (z <= 18) {
        costo += 20;
        if (z < 12)
            costo -= 10;
    }
    else if (z >= 70)
        costo += 10;
    else
        costo += 35;

    printf("Il costo finale e': %d\n", costo);

    return 0;
}
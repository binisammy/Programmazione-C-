#include <stdio.h>

int main(){
    float x,y,z, aux;
    printf("Inserisci 3 valori:");
    scanf("%f%f%f", &x, &y, &z);

    if (y > z) {
        if (y > x) {
            aux = x;
            x = y;
            y = aux;
        }
    }
    else if (z > x) {
        aux = x;
        x = z;
        z = aux;
    }
    if (y < z) {
        aux = z;
        z = y;
        y = aux;
    }

    printf("Stampa in ordine cresecente: %.2f  %.2f  %.2f\n", z, y ,x);

    return 0;
}
#include <stdio.h>

int main() {
    int x, y, z;

    do {
        printf("Inserisci tre numeri interi diversi tra loro:\n");
        scanf("%d%d%d", &x, &y, &z);
    } while (x == y || y == z || x == z);

    if (x > y && x > z)
        printf("Il maggiore e' il primo!\n");
    else if (y > x && y > z)
        printf("Il maggiore e' il secondo!\n");
    else
        printf("Il maggiore e' il terzo!\n");

    return 0;
}
#include <stdio.h>

int main() {
    int x, y, z;
    printf("Inserisci tre numeri interi:\n");
    scanf("%d%d%d", &x, &y, &z);

    if (x-y == y-z)
        printf("La serie dei numeri %d %d %d e' una progressione aritmetica.\n", x, y, z);
    else
        printf("La serie dei numeri %d %d %d NON e' una progressione aritmetica.\n", x, y, z);

    return 0;
}
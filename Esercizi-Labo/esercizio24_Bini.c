#include <stdio.h>

int main() {
    int x, y;
    printf("Inserisci due numeri interi:\n");
    scanf("%d%d", &x, &y);

    if (x >= 100 && y >= 100 && x <= 200 && y <= 200)
        printf("Entrambi i numeri sono nel range 100-200\n");
    else if (x >= 100 && x <= 200)
        printf("Soltanto il primo numero (%d) e' compreso nel range 100-200.\n", x);
    else if (y >= 100 && y <= 200)
        printf("Soltanto il secondo numero (%d) e' compreso nel range 100-200.\n", y);
    else
        printf("Nessuno tra i due numeri e' compreso nel range 100-200.\n");

    return 0;
}
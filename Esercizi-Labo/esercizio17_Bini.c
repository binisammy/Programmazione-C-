#include <stdio.h>

int main() {
    double prezzo, budget;

    do {
        printf("Inserisci il prezzo del prodotto:\n");
        scanf("%lf", &prezzo);
        printf("Inserisci la quantita' di soldi nel portafoglio:\n");
        scanf("%lf", &budget);
    } while (prezzo < 0 || budget < 0);

    if (budget >= prezzo) {
        printf("Puoi acquistare il prodotto.\n");
        printf("Rimarrai con %lf euro\n", budget - prezzo);
    } else
        printf("Non puoi acquistare il prodotto.\n");

    return 0;
}
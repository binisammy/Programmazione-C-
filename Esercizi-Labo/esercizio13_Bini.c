#include <stdio.h>

int main() {
    int primaVar, secondaVar, aux;
    printf("Inserisci due numeri interi:\n");
    scanf("%d%d", &primaVar, &secondaVar);

    aux = primaVar;
    primaVar = secondaVar;
    secondaVar = aux;

    printf("Scambio variabili:\n");
    printf("Il primo valore vale: %d\nIl secondo valore vale: %d\n", primaVar, secondaVar);
    return 0;
}
#include <stdio.h>

int main() {
    int varA, varB, varC;
    printf("Inserisci tre numeri interi:\n");
    scanf("%d%d%d", &varA, &varB, &varC);

    if (varB >= varA && varB <= varC)
        printf("%d e' compreso tra %d e %d", varB, varA, varC);
    else
        printf("%d NON e' compreso tra %d e %d", varB, varA, varC);

    return 0;
}